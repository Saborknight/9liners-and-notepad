ARMAKE=$(abspath .build/bin/armake)
ARMAKESRC=https://github.com/TheMysteriousVincent/armake.git
TAG=$(shell git describe --tag | sed "s/-.*-/-/")
PACKAGES=main sheet_adjust_fire_mission sheet_cas_checkin sheet_cas_nineliner sheet_fire_for_effect sheet_gunship_cff sheet_marking_mission sheet_medevac_nineliner sheet_notepad sheet_target_location_methods ui_fonts

all: removeAll \
	$(PACKAGES) \
	remove

deploy: all
	rm -Rf .builds/$(TAG)/
	mkdir -p .builds/$(TAG)/
	cp -Rf .build/addons/ .builds/$(TAG)/
	cp -Rf .build/keys/ .builds/$(TAG)/

deps:
	sudo apt-get install -y git bison flex libssl-dev python3

build_armake: prepare
	@if [ ! -d .build/armake ]; then git clone $(ARMAKESRC) .build/armake ; \
		cd .build/armake \
		&& make \
		&& cd ../../ \
		&& cp -f .build/armake/bin/armake .build/bin/ ; \
	fi

prepare:
	mkdir -p .build/
	mkdir -p .build/bin/
	mkdir -p .build/keys/
	mkdir -p .build/addons/

createKey: build_armake
	ifndef PRVKEYFILE
		cd .build/keys/ && $(ARMAKE) keygen -f nln_$(TAG)
		$(eval KEY := nln_$(TAG))
		$(eval PRVKEYFILE := .build/keys/$(KEY).biprivatekey)
	endif

$(PACKAGES): build_armake createKey
	$(ARMAKE) build --force -k $(PRVKEYFILE) -e prefix=x\\nln\\addons\\$@ addons/$@ .build/addons/nln_$@.pbo

test: prepare
	git clone https://github.com/TheMysteriousVincent/sqf.git .build/sqf
	python3 .build/sqf/sqflint.py -d addons/
	python3 tools/config_style_checker.py

remove:
	rm -Rf .build/armake
	rm -Rf .build/bin
	rm -Rf .build/sqf

removeAll:
	rm -Rf .build/
