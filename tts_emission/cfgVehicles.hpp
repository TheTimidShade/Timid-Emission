class CfgVehicles {
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription;
	};
	
	class tts_emission_module : Module_F {
		author = "TheTimidShade";
		scope = 1;
		scopeCurator = 1;
		is3DEN = 0;
		displayName = "TheTimidShade's Module";
		vehicleClass = "Modules";
		category = "tts_emission_modules";
	};
	
	class tts_emission_moduleEmissionSettings : tts_emission_module {
		scope = 2;
		scopeCurator = 0; // module is not available in Zeus
		isDisposable = 1; // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0;
		displayName = "$STR_tts_emission_moduleChangeSettings_title_alt";
		icon = "tts_emission\icons\tts_settings.paa";
		category = "tts_emission_modules";
		function = "tts_emission_fnc_editor_moduleEmissionSettings";
		
		class Attributes : AttributesBase {
			class EmissionType : Combo {
				property = "tts_emission_moduleEmissionSettings_EmissionType";
				displayName = "$STR_tts_emission_moduleChangeSettings_emissionType";
				tooltip = "$STR_tts_emission_moduleChangeSettings_emissionType_desc";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class MapSweep {name = "$STR_tts_emission_moduleChangeSettings_emissionType_mapSweep"; value = 0;}; // Listbox item
					class FixedDistance {name = "$STR_tts_emission_moduleChangeSettings_emissionType_fixedDistance"; value = 1;};
				};
			};
			class PlayerEffect : Combo {
				property = "tts_emission_moduleEmissionSettings_PlayerEffect";
				displayName = "$STR_tts_emission_moduleChangeSettings_playerEffect";
				tooltip = "$STR_tts_emission_moduleChangeSettings_playerEffect_desc";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class KillUnsheltered {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_killUnsheltered"; value = 0;}; // Listbox item
					class KnockoutUnsheltered {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_knockoutUnsheltered"; value = 1;};
					class KillAll {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_killAll"; value = 2;};
					class KnockoutAll {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_knockoutAll"; value = 3;};
					class NoEffect {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_noEffect"; value = 4;};
				};
			};
			class AIEffect : Combo {
				property = "tts_emission_moduleEmissionSettings_AIEffect";
				displayName = "$STR_tts_emission_moduleChangeSettings_aiEffect";
				tooltip = "$STR_tts_emission_moduleChangeSettings_aiEffect_desc";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class KillUnsheltered {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_killUnsheltered"; value = 0;}; // Listbox item
					class KnockoutUnsheltered {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_knockoutUnsheltered"; value = 1;};
					class KillAll {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_killAll"; value = 2;};
					class KnockoutAll {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_knockoutAll"; value = 3;};
					class NoEffect {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_noEffect"; value = 4;};
				};
			};
			class AircraftEffect : Combo {
				property = "tts_emission_moduleEmissionSettings_AircraftEffect";
				displayName = "$STR_tts_emission_moduleChangeSettings_aircraftEffect";
				tooltip = "$STR_tts_emission_moduleChangeSettings_aircraftEffect_desc";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class LightningBolt {name = "$STR_tts_emission_moduleChangeSettings_aircraftEffect_lightningBolt"; value = 0;}; // Listbox item
					class EngineFailure {name = "$STR_tts_emission_moduleChangeSettings_aircraftEffect_engineFailure"; value = 1;};
					class NoEffect {name = "$STR_tts_emission_moduleChangeSettings_emissionEffect_noEffect"; value = 2;};
				};
			};
			class SirenType : Combo {
				property = "tts_emission_moduleEmissionSettings_SirenType";
				displayName = "$STR_tts_emission_moduleChangeSettings_sirenType";
				tooltip = "$STR_tts_emission_moduleChangeSettings_sirenType_desc";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class Classic {name = "$STR_tts_emission_moduleChangeSettings_sirenType_classic"; value = 0;}; // Listbox item
					class Dramatic {name = "$STR_tts_emission_moduleChangeSettings_sirenType_dramatic"; value = 1;};
					class None {name = "$STR_tts_emission_none"; value = 2;};
				};
			};
			class UsePhysicalSiren : Checkbox {
				property = "tts_emission_moduleEmissionSettings_UsePhysicalSiren";
				displayName = "$STR_tts_emission_moduleChangeSettings_usePhysicalSiren";
				tooltip = "$STR_tts_emission_moduleChangeSettings_usePhysicalSiren_desc";
				defaultValue = "0";
			};
			class ProtectionEquipment : Edit {
				property = "tts_emission_moduleEmissionSettings_ProtectionEquipment";
				displayName = "$STR_tts_emission_moduleChangeSettings_protectionEquipment";
				tooltip = "$STR_tts_emission_moduleChangeSettings_protectionEquipment_desc";
				typeName = "STRING";
				defaultValue = """""";
			};
			class ImmuneUnits : Edit {
				property = "tts_emission_moduleEmissionSettings_ImmuneUnits";
				displayName = "$STR_tts_emission_moduleChangeSettings_immuneUnits";
				tooltip = "$STR_tts_emission_moduleChangeSettings_immuneUnits_desc";
				typeName = "STRING";
				defaultValue = """""";
			};
			class WaveSpeed : Edit {
				property = "tts_emission_moduleEmissionSettings_WaveSpeed";
				displayName = "$STR_tts_emission_moduleChangeSettings_waveSpeed";
				tooltip = "$STR_tts_emission_moduleChangeSettings_waveSpeed_desc";
				typeName = "NUMBER";
				defaultValue = "125";
			};
			class ShowEmissionOnMap : Checkbox {
				property = "tts_emission_moduleEmissionSettings_ShowEmissionOnMap";
				displayName = "$STR_tts_emission_moduleChangeSettings_showEmissionOnMap";
				tooltip = "$STR_tts_emission_moduleChangeSettings_showEmissionOnMap_desc";
				defaultValue = "0";
			};
			class DisableRain : Checkbox {
				property = "tts_emission_moduleEmissionSettings_DisableRain";
				displayName = "$STR_tts_emission_moduleChangeSettings_rainEffects";
				tooltip = "$STR_tts_emission_moduleChangeSettings_rainEffects_desc";
				defaultValue = "0";
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "$STR_tts_emission_moduleChangeSettings_desc"; // Short description, will be formatted as structured text
		};
	};

	class tts_emission_moduleStartEmission : tts_emission_module {
		scope = 2;
		scopeCurator = 0; // module is not available in Zeus
		isDisposable = 1; // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 1;
		displayName = "$STR_tts_emission_moduleStartEmission_title";
		icon = "tts_emission\icons\tts_emission.paa"
		category = "tts_emission_modules";
		function = "tts_emission_fnc_editor_moduleStartEmission";
		
		class Attributes : AttributesBase {
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "$STR_tts_emission_moduleStartEmission_desc"; // Short description, will be formatted as structured text
		};
	};

}