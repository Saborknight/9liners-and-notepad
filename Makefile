
ARMAKE=bin/armake

all:
	build_armake \
	nln_main.pbo \
	nln_sheet_adjust_fire_mission.pbo \
	nln_sheet_cas_checkin.pbo \
	nln_sheet_cas_nineliner.pbo \
	nln_sheet_fire_for_effect.pbo \
	nln_sheet_gunship_cff.pbo \
	nln_sheet_marking_mission.pbo \
	nln_sheet_medevac_nineliner.pbo \
	nln_sheet_notepad.pbo \
	nln_sheet_target_locatoin_methods.pbo \
	remove

build_armake: prep
	git clone https://github.com/jonpas/armake.git .build/armake
	make -C .build/armake
	cp -f .build/armake/bin/armake /bin

prep:
	mkdir -p bin/
	mkdir -p .build/
	apt-get update && apt-get install bison flex libssl-dev

nln_main.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\main addons/main .build/nln_main.pbo

nln_sheet_adjust_fire_mission.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\adjust_fire_mission addons/main .build/nln_sheet_adjust_fire_mission.pbo

nln_sheet_cas_checkin.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\cas_checkin addons/main .build/nln_sheet_cas_checkin.pbo

nln_sheet_cas_nineliner.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\cas_nineliner addons/main .build/nln_sheet_cas_nineliner.pbo

nln_sheet_fire_for_effect.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\fire_for_effect addons/main .build/nln_sheet_fire_for_effect.pbo

nln_sheet_gunship_cff.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\gunship_cff addons/main .build/nln_sheet_gunship_cff.pbo

nln_sheet_marking_mission.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\marking_mission addons/main .build/nln_sheet_marking_mission.pbo

nln_sheet_medevac_nineliner.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\medevac_nineliner addons/main .build/nln_sheet_medevac_nineliner.pbo

nln_sheet_notepad.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\notepad addons/main .build/nln_sheet_notepad.pbo

nln_sheet_target_locatoin_methods.pbo:
	$(ARMAKE) build --force -e prefix=x\nln\addons\target_locatoin_methods addons/main .build/nln_sheet_target_locatoin_methods.pbo

test: prep
	git clone https://github.com/TheMysteriousVincent/sqf.git .build/sqf
	python3 .build/sqf/sqflint.py -d addons/
	python3 tools/config_style_checker.py

remove:
	rm -R bin/
