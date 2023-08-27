#pragma once
#include <fstream>
#include <string>
#include <vector>

namespace Subnautica
{
	struct item
	{
		std::string itemName;
		unsigned int itemNumber;
	};

	/*
			item* Ptr_name = NULL;
		*/

		//
		//	1st PRIMARY
		//
	std::vector<item> primary_1st;
	item* Ptr_acidMushroom = NULL;
	item* Ptr_bladderfish = NULL;
	item* Ptr_bloodOil = NULL;
	item* Ptr_caveSulfur = NULL;
	item* Ptr_copperOre = NULL;
	item* Ptr_coralTubeSample = NULL;
	item* Ptr_creepvineSample = NULL;
	item* Ptr_creepvineSeedCluster = NULL;
	item* Ptr_crystallineSulfur = NULL;
	item* Ptr_deepShroom = NULL;
	item* Ptr_diamond = NULL;
	item* Ptr_gasPod = NULL;
	item* Ptr_gelSack = NULL;
	item* Ptr_gold = NULL;
	item* Ptr_ionCube = NULL;
	item* Ptr_lead = NULL;
	item* Ptr_lithium = NULL;
	item* Ptr_magnetite = NULL;
	item* Ptr_quartz = NULL;
	item* Ptr_ruby = NULL;
	item* Ptr_saltDeposit = NULL;
	item* Ptr_silverOre = NULL;
	item* Ptr_stalkerTooth = NULL;
	item* Ptr_tableCoralSample = NULL;
	item* Ptr_titanium = NULL;

	//
	//	2nd SECONDARY
	//
	std::vector<item> secondary_2nd;
	item* Ptr_aerogel = NULL;
	item* Ptr_basicPlantPot = NULL;
	item* Ptr_battery = NULL;
	item* Ptr_beacon = NULL;
	item* Ptr_benzene = NULL;
	item* Ptr_bleach = NULL;
	item* Ptr_chicPlantPot = NULL;
	item* Ptr_compositePlantPot = NULL;
	item* Ptr_copperWire = NULL;
	item* Ptr_fabricator = NULL;
	item* Ptr_fiberMesh = NULL;
	item* Ptr_filteredWater = NULL;
	item* Ptr_fireExtinguisher = NULL;
	item* Ptr_flare = NULL;
	item* Ptr_floatingAirPump = NULL;
	item* Ptr_gasTorpedo = NULL;
	item* Ptr_glass = NULL;
	item* Ptr_hullReinforcement = NULL;
	item* Ptr_hydrochloricAcid = NULL;
	item* Ptr_indoorGrowbed = NULL;
	item* Ptr_ladder = NULL;
	item* Ptr_locker = NULL;
	item* Ptr_lubricant = NULL;
	item* Ptr_multipurposeRoom = NULL;
	item* Ptr_pipe = NULL;
	item* Ptr_plantShelf = NULL;
	item* Ptr_powerTransmitter = NULL;
	item* Ptr_purpleTablet = NULL;
	item* Ptr_radio = NULL;
	item* Ptr_scannerRoom = NULL;
	item* Ptr_scannerRoomRangeUpgrade = NULL;
	item* Ptr_scannerRoomSpeedUpgrade = NULL;
	item* Ptr_siliconeRubber = NULL;
	item* Ptr_solarPanel = NULL;
	item* Ptr_standardO2Tank = NULL;
	item* Ptr_storageModule = NULL;
	item* Ptr_titaniumIngot = NULL;
	item* Ptr_vortexTorpedo = NULL;
	item* Ptr_wallLocker = NULL;
	item* Ptr_waterproofLocker = NULL;
	item* Ptr_wiringKit = NULL;

	//
	//	3rd TERTIARY
	//
	std::vector<item> tertiary_3rd;
	item* Ptr_airBladder = NULL;
	item* Ptr_aquarium = NULL;
	item* Ptr_batterryCharger = NULL;
	item* Ptr_bioreactor = NULL;
	item* Ptr_bulkhead = NULL;
	item* Ptr_compass = NULL;
	item* Ptr_computerChip = NULL;
	item* Ptr_creatureDecoy = NULL;
	item* Ptr_cyclopsDecoyTubeUpgrade = NULL;
	item* Ptr_cyclopsFireSuppressionSystem = NULL;
	item* Ptr_disinfectedWater = NULL;
	item* Ptr_enameledGlass = NULL;
	item* Ptr_fins = NULL;
	item* Ptr_firstAidKit = NULL;
	item* Ptr_flashLight = NULL;
	item* Ptr_gravTrap = NULL;
	item* Ptr_highCapacityO2Tank = NULL;
	item* Ptr_laserCutter = NULL;
	item* Ptr_lightStack = NULL;
	item* Ptr_moonpool = NULL;
	item* Ptr_pathfinderTool = NULL;
	item* Ptr_plasteelIngot = NULL;
	item* Ptr_polyaniline = NULL;
	item* Ptr_powerCell = NULL;
	item* Ptr_prawnSuitTorpedoArm = NULL;
	item* Ptr_propulsionCannon = NULL;
	item* Ptr_radiationSuit = NULL;
	item* Ptr_rebreather = NULL;
	item* Ptr_repairTool = NULL;
	item* Ptr_scanner = NULL;
	item* Ptr_seaglide = NULL;
	item* Ptr_seamothDepthModuleMK1 = NULL;
	item* Ptr_seamothSonar = NULL;
	item* Ptr_seamothTorpedoSystem = NULL;
	item* Ptr_survivalKnife = NULL;
	item* Ptr_syntheticFibers = NULL;
	item* Ptr_thermalPlant = NULL;
	item* Ptr_waterFiltrationMachine = NULL;

	//
	//	4th QUATERNARY
	//
	std::vector<item> quaternary_4th;
	item* Ptr_advancedWiringKit = NULL;
	item* Ptr_cameraDrone = NULL;
	item* Ptr_cyclopsDepthModuleMK1 = NULL;
	item* Ptr_cyclopsEngineEfficiencyModule = NULL;
	item* Ptr_cyclopsSonarUpgrade = NULL;
	item* Ptr_engineEfficiencyModule = NULL;
	item* Ptr_habitatBuilder = NULL;
	item* Ptr_lightweightHighCapacityTank = NULL;
	item* Ptr_medicalKitFabricator = NULL;
	item* Ptr_mobileVehicleBay = NULL;
	item* Ptr_modificationStation = NULL;
	item* Ptr_neptuneLaunchPlatform = NULL;
	item* Ptr_observatory = NULL;
	item* Ptr_prawnSuit = NULL;
	item* Ptr_prawnSuitPropulsionCannon = NULL;
	item* Ptr_reinforcedDiveSuit = NULL;
	item* Ptr_repulsionCannon = NULL;
	item* Ptr_scannerRoomHUDChip = NULL;
	item* Ptr_seamoth = NULL;
	item* Ptr_seamothDepthModuleMK2 = NULL;
	item* Ptr_seamothPerimeterDefenseSystem = NULL;
	item* Ptr_stasisRifle = NULL;
	item* Ptr_swimChargeFins = NULL;
	item* Ptr_thermoBlade = NULL;
	item* Ptr_ultraGlideFins = NULL;
	item* Ptr_ultraHighCapacityTank = NULL;
	item* Ptr_vehicleUpgradeConsole = NULL;

	//
	//	5th QUINARY
	//
	std::vector<item> quinary_5th;
	item* Ptr_cyclops = NULL;
	item* Ptr_cyclopsShieldGenerator = NULL;
	item* Ptr_powerCellCharger = NULL;
	item* Ptr_prawnSuitGrapplingArm = NULL;
	item* Ptr_seamothDepthModuleMK3 = NULL;
	item* Ptr_seamothSolarCharger = NULL;

	void resetItemNumber()
	{
		for (auto i = primary_1st.begin(); i != primary_1st.end(); i++)
		{
			i->itemNumber = 0;
		}
		for (auto i = secondary_2nd.begin(); i != secondary_2nd.end(); i++)
		{
			i->itemNumber = 0;
		}
		for (auto i = tertiary_3rd.begin(); i != tertiary_3rd.end(); i++)
		{
			i->itemNumber = 0;
		}
		for (auto i = quaternary_4th.begin(); i != quaternary_4th.end(); i++)
		{
			i->itemNumber = 0;
		}
		for (auto i = quinary_5th.begin(); i != quinary_5th.end(); i++)
		{
			i->itemNumber = 0;
		}
		std::cout << "Done reset items's number." << std::endl;
	}

	void fileReading(const std::string fileName, std::vector<item>& itemLevel)
	{
		std::ifstream readfile;
		std::string buffer;

		readfile.open(fileName);
		if (readfile.fail())
		{
			throw "ERROR : CAN NOT OPEN \"" + fileName + "\". IT IS DO NOT EXIST OR CAN NOT ACCESS.";
		}
		else
		{
			while (std::getline(readfile, buffer))
			{
				itemLevel.push_back({ buffer, 0 });
			}
			readfile.close();
			std::cout << "Done reading " << fileName << std::endl;
		}
	}

	void pointerSetting()
	{
		/*
				else if (i->itemName == "STRING")
				{
					POINTER = &(*i);
				}
			*/

			//
			//	1st PRIMARY
			//
		for (auto i = primary_1st.begin(); i != primary_1st.end(); i++)
		{
			if (i->itemName == "Acid mushroom")
			{
				Ptr_acidMushroom = &(*i);
			}
			else if (i->itemName == "Bladderfish")
			{
				Ptr_bladderfish = &(*i);
			}
			else if (i->itemName == "Blood oil")
			{
				Ptr_bloodOil = &(*i);
			}
			else if (i->itemName == "Cave sulfur")
			{
				Ptr_caveSulfur = &(*i);
			}
			else if (i->itemName == "Copper ore")
			{
				Ptr_copperOre = &(*i);
			}
			else if (i->itemName == "Coral tube sample")
			{
				Ptr_coralTubeSample = &(*i);
			}
			else if (i->itemName == "Creepvine sample")
			{
				Ptr_creepvineSample = &(*i);
			}
			else if (i->itemName == "Creepvine seed cluster")
			{
				Ptr_creepvineSeedCluster = &(*i);
			}
			else if (i->itemName == "Crystalline sulfur")
			{
				Ptr_crystallineSulfur = &(*i);
			}
			else if (i->itemName == "Deep shroom")
			{
				Ptr_deepShroom = &(*i);
			}
			else if (i->itemName == "Diamond")
			{
				Ptr_diamond = &(*i);
			}
			else if (i->itemName == "Gas pod")
			{
				Ptr_gasPod = &(*i);
			}
			else if (i->itemName == "Gel sack")
			{
				Ptr_gelSack = &(*i);
			}
			else if (i->itemName == "Gold")
			{
				Ptr_gold = &(*i);
			}
			else if (i->itemName == "Ion cube")
			{
				Ptr_ionCube = &(*i);
			}
			else if (i->itemName == "Lead")
			{
				Ptr_lead = &(*i);
			}
			else if (i->itemName == "Lithium")
			{
				Ptr_lithium = &(*i);
			}
			else if (i->itemName == "Magnetite")
			{
				Ptr_magnetite = &(*i);
			}
			else if (i->itemName == "Quartz")
			{
				Ptr_quartz = &(*i);
			}
			else if (i->itemName == "Ruby")
			{
				Ptr_ruby = &(*i);
			}
			else if (i->itemName == "Salt deposit")
			{
				Ptr_saltDeposit = &(*i);
			}
			else if (i->itemName == "Silver ore")
			{
				Ptr_silverOre = &(*i);
			}
			else if (i->itemName == "Stalker tooth")
			{
				Ptr_stalkerTooth = &(*i);
			}
			else if (i->itemName == "Table coral sample")
			{
				Ptr_tableCoralSample = &(*i);
			}
			else if (i->itemName == "Titanium")
			{
				Ptr_titanium = &(*i);
			}
			else
			{
				std::cout << "ERROR : Can't set pointer of 1st " << i->itemName << "." << std::endl;
			}
		}

		//
		//	2nd SECONDARY
		//
		for (auto i = secondary_2nd.begin(); i != secondary_2nd.end(); i++)
		{
			if (i->itemName == "Aerogel")
			{
				Ptr_aerogel = &(*i);
			}
			else if (i->itemName == "Basic plant pot")
			{
				Ptr_basicPlantPot = &(*i);
			}
			else if (i->itemName == "Battery")
			{
				Ptr_battery = &(*i);
			}
			else if (i->itemName == "Beacon")
			{
				Ptr_beacon = &(*i);
			}
			else if (i->itemName == "Benzene")
			{
				Ptr_benzene = &(*i);
			}
			else if (i->itemName == "Bleach")
			{
				Ptr_bleach = &(*i);
			}
			else if (i->itemName == "Chic plant pot")
			{
				Ptr_chicPlantPot = &(*i);
			}
			else if (i->itemName == "Composite plant pot")
			{
				Ptr_compositePlantPot = &(*i);
			}
			else if (i->itemName == "Copper wire")
			{
				Ptr_copperWire = &(*i);
			}
			else if (i->itemName == "Fabricator")
			{
				Ptr_fabricator = &(*i);
			}
			else if (i->itemName == "Fiber mesh")
			{
				Ptr_fiberMesh = &(*i);
			}
			else if (i->itemName == "Filtered water")
			{
				Ptr_filteredWater = &(*i);
			}
			else if (i->itemName == "Fire extinguisher")
			{
				Ptr_fireExtinguisher = &(*i);
			}
			else if (i->itemName == "Flare")
			{
				Ptr_flare = &(*i);
			}
			else if (i->itemName == "Floating air pump")
			{
				Ptr_floatingAirPump = &(*i);
			}
			else if (i->itemName == "Gas torpedo")
			{
				Ptr_gasTorpedo = &(*i);
			}
			else if (i->itemName == "Glass")
			{
				Ptr_glass = &(*i);
			}
			else if (i->itemName == "Hull reinforcement")
			{
				Ptr_hullReinforcement = &(*i);
			}
			else if (i->itemName == "Hydrochloric acid")
			{
				Ptr_hydrochloricAcid = &(*i);
			}
			else if (i->itemName == "Indoor growbed")
			{
				Ptr_indoorGrowbed = &(*i);
			}
			else if (i->itemName == "Ladder")
			{
				Ptr_ladder = &(*i);
			}
			else if (i->itemName == "Locker")
			{
				Ptr_locker = &(*i);
			}
			else if (i->itemName == "Lubricant")
			{
				Ptr_lubricant = &(*i);
			}
			else if (i->itemName == "Multipurpose room")
			{
				Ptr_multipurposeRoom = &(*i);
			}
			else if (i->itemName == "Pipe")
			{
				Ptr_pipe = &(*i);
			}
			else if (i->itemName == "Plant shelf")
			{
				Ptr_plantShelf = &(*i);
			}
			else if (i->itemName == "Power transmitter")
			{
				Ptr_powerTransmitter = &(*i);
			}
			else if (i->itemName == "Purple tablet")
			{
				Ptr_purpleTablet = &(*i);
			}
			else if (i->itemName == "Radio")
			{
				Ptr_radio = &(*i);
			}
			else if (i->itemName == "Scanner room")
			{
				Ptr_scannerRoom = &(*i);
			}
			else if (i->itemName == "Scanner room range upgrade")
			{
				Ptr_scannerRoomRangeUpgrade = &(*i);
			}
			else if (i->itemName == "Scanner room speed upgrade")
			{
				Ptr_scannerRoomSpeedUpgrade = &(*i);
			}
			else if (i->itemName == "Silicone rubber")
			{
				Ptr_siliconeRubber = &(*i);
			}
			else if (i->itemName == "Solar panel")
			{
				Ptr_solarPanel = &(*i);
			}
			else if (i->itemName == "Standard o2 tank")
			{
				Ptr_standardO2Tank = &(*i);
			}
			else if (i->itemName == "Storage module")
			{
				Ptr_storageModule = &(*i);
			}
			else if (i->itemName == "Titanium ingot")
			{
				Ptr_titaniumIngot = &(*i);
			}
			else if (i->itemName == "Vortex torpedo")
			{
				Ptr_vortexTorpedo = &(*i);
			}
			else if (i->itemName == "Wall locker")
			{
				Ptr_wallLocker = &(*i);
			}
			else if (i->itemName == "Waterproof locker")
			{
				Ptr_waterproofLocker = &(*i);
			}
			else if (i->itemName == "Wiring kit")
			{
				Ptr_wiringKit = &(*i);
			}
			else
			{
				std::cout << "ERORR : Can't set pointer of 2nd " << i->itemName << "." << std::endl;
			}
		}

		//
		//	3rd TERTIARY
		//
		for (auto i = tertiary_3rd.begin(); i != tertiary_3rd.end(); i++)
		{
			if (i->itemName == "Air bladder")
			{
				Ptr_airBladder = &(*i);
			}
			else if (i->itemName == "Aquarium")
			{
				Ptr_aquarium = &(*i);
			}
			else if (i->itemName == "Battery charger")
			{
				Ptr_batterryCharger = &(*i);
			}
			else if (i->itemName == "Bioreactor")
			{
				Ptr_bioreactor = &(*i);
			}
			else if (i->itemName == "Bulkhead")
			{
				Ptr_bulkhead = &(*i);
			}
			else if (i->itemName == "Computer chip")
			{
				Ptr_computerChip = &(*i);
			}
			else if (i->itemName == "Compass")
			{
				Ptr_compass = &(*i);
			}
			else if (i->itemName == "Creature decoy")
			{
				Ptr_creatureDecoy = &(*i);
			}
			else if (i->itemName == "Cyclops decoy tube upgrade")
			{
				Ptr_cyclopsDecoyTubeUpgrade = &(*i);
			}
			else if (i->itemName == "Cyclops fire suppression system")
			{
				Ptr_cyclopsFireSuppressionSystem = &(*i);
			}
			else if (i->itemName == "Disinfected water")
			{
				Ptr_disinfectedWater = &(*i);
			}
			else if (i->itemName == "Enameled glass")
			{
				Ptr_enameledGlass = &(*i);
			}
			else if (i->itemName == "Fins")
			{
				Ptr_fins = &(*i);
			}
			else if (i->itemName == "First aid kit")
			{
				Ptr_firstAidKit = &(*i);
			}
			else if (i->itemName == "Flashlight")
			{
				Ptr_flashLight = &(*i);
			}
			else if (i->itemName == "Grav trap")
			{
				Ptr_gravTrap = &(*i);
			}
			else if (i->itemName == "High capacity o2 tank")
			{
				Ptr_highCapacityO2Tank = &(*i);
			}
			else if (i->itemName == "Laser cutter")
			{
				Ptr_laserCutter = &(*i);
			}
			else if (i->itemName == "Light stack")
			{
				Ptr_lightStack = &(*i);
			}
			else if (i->itemName == "Moonpool")
			{
				Ptr_moonpool = &(*i);
			}
			else if (i->itemName == "Pathfinder tool")
			{
				Ptr_pathfinderTool = &(*i);
			}
			else if (i->itemName == "Plasteel ingot")
			{
				Ptr_plasteelIngot = &(*i);
			}
			else if (i->itemName == "Polyaniline")
			{
				Ptr_polyaniline = &(*i);
			}
			else if (i->itemName == "Power cell")
			{
				Ptr_powerCell = &(*i);
			}
			else if (i->itemName == "Prawn suit torpedo arm")
			{
				Ptr_prawnSuitTorpedoArm = &(*i);
			}
			else if (i->itemName == "Propulsion cannon")
			{
				Ptr_propulsionCannon = &(*i);
			}
			else if (i->itemName == "Radiation suit")
			{
				Ptr_radiationSuit = &(*i);
			}
			else if (i->itemName == "Rebreather")
			{
				Ptr_rebreather = &(*i);
			}
			else if (i->itemName == "Repair tool")
			{
				Ptr_repairTool = &(*i);
			}
			else if (i->itemName == "Scanner")
			{
				Ptr_scanner = &(*i);
			}
			else if (i->itemName == "Seaglide")
			{
				Ptr_seaglide = &(*i);
			}
			else if (i->itemName == "Seamoth depth module mk1")
			{
				Ptr_seamothDepthModuleMK1 = &(*i);
			}
			else if (i->itemName == "Seamoth sonar")
			{
				Ptr_seamothSonar = &(*i);
			}
			else if (i->itemName == "Seamoth torpedo system")
			{
				Ptr_seamothTorpedoSystem = &(*i);
			}
			else if (i->itemName == "Survival knife")
			{
				Ptr_survivalKnife = &(*i);
			}
			else if (i->itemName == "Synthetic fibers")
			{
				Ptr_syntheticFibers = &(*i);
			}
			else if (i->itemName == "Thermal plant")
			{
				Ptr_thermalPlant = &(*i);
			}
			else if (i->itemName == "Water filtration machine")
			{
				Ptr_waterFiltrationMachine = &(*i);
			}
			else
			{
				std::cout << "ERROR : Can't set pointer of 3rd " << i->itemName << "." << std::endl;
			}
		}

		//
		//	4th QUATERNARY
		//
		for (auto i = quaternary_4th.begin(); i != quaternary_4th.end(); i++)
		{
			if (i->itemName == "Advanced wiring kit")
			{
				Ptr_advancedWiringKit = &(*i);
			}
			else if (i->itemName == "Camera drone")
			{
				Ptr_cameraDrone = &(*i);
			}
			else if (i->itemName == "Cyclops depth module mk1")
			{
				Ptr_cyclopsDepthModuleMK1 = &(*i);
			}
			else if (i->itemName == "Cyclops engine efficiency module")
			{
				Ptr_cyclopsEngineEfficiencyModule = &(*i);
			}
			else if (i->itemName == "Cyclops sonar upgrade")
			{
				Ptr_cyclopsSonarUpgrade = &(*i);
			}
			else if (i->itemName == "Engine efficiency module")
			{
				Ptr_engineEfficiencyModule = &(*i);
			}
			else if (i->itemName == "Habitat builder")
			{
				Ptr_habitatBuilder = &(*i);
			}
			else if (i->itemName == "Lightweight high capacity tank")
			{
				Ptr_lightweightHighCapacityTank = &(*i);
			}
			else if (i->itemName == "Medical kit fabricator")
			{
				Ptr_medicalKitFabricator = &(*i);
			}
			else if (i->itemName == "Mobile vehicle bay")
			{
				Ptr_mobileVehicleBay = &(*i);
			}
			else if (i->itemName == "Modification station")
			{
				Ptr_modificationStation = &(*i);
			}
			else if (i->itemName == "Neptune launch platform")
			{
				Ptr_neptuneLaunchPlatform = &(*i);
			}
			else if (i->itemName == "Observatory")
			{
				Ptr_observatory = &(*i);
			}
			else if (i->itemName == "Prawn suit")
			{
				Ptr_prawnSuit = &(*i);
			}
			else if (i->itemName == "Prawn suit propulsion cannon")
			{
				Ptr_prawnSuitPropulsionCannon = &(*i);
			}
			else if (i->itemName == "Reinforced dive suit")
			{
				Ptr_reinforcedDiveSuit = &(*i);
			}
			else if (i->itemName == "Repulsion cannon")
			{
				Ptr_repulsionCannon = &(*i);
			}
			else if (i->itemName == "Scanner room hud chip")
			{
				Ptr_scannerRoomHUDChip = &(*i);
			}
			else if (i->itemName == "Seamoth")
			{
				Ptr_seamoth = &(*i);
			}
			else if (i->itemName == "Seamoth depth module mk2")
			{
				Ptr_seamothDepthModuleMK2 = &(*i);
			}
			else if (i->itemName == "Seamoth perimeter defense system")
			{
				Ptr_seamothPerimeterDefenseSystem = &(*i);
			}
			else if (i->itemName == "Stasis rifle")
			{
				Ptr_stasisRifle = &(*i);
			}
			else if (i->itemName == "Swim charge fins")
			{
				Ptr_swimChargeFins = &(*i);
			}
			else if (i->itemName == "Thermoblade")
			{
				Ptr_thermoBlade = &(*i);
			}
			else if (i->itemName == "Ultra glide fins")
			{
				Ptr_ultraGlideFins = &(*i);
			}
			else if (i->itemName == "Ultra high capacity tank")
			{
				Ptr_ultraHighCapacityTank = &(*i);
			}
			else if (i->itemName == "Vehicle upgrade console")
			{
				Ptr_vehicleUpgradeConsole = &(*i);
			}
			else
			{
				std::cout << "ERROR : Can't set pointer of 4th " << i->itemName << "." << std::endl;
			}
		}

		//
		//	5th QUINARY
		//
		for (auto i = quinary_5th.begin(); i != quinary_5th.end(); i++)
		{
			if (i->itemName == "Cyclops")
			{
				Ptr_cyclops = &(*i);
			}
			else if (i->itemName == "Cyclops shield generator")
			{
				Ptr_cyclopsShieldGenerator = &(*i);
			}
			else if (i->itemName == "Power cell charger")
			{
				Ptr_powerCellCharger = &(*i);
			}
			else if (i->itemName == "Prawn suit grappling arm")
			{
				Ptr_prawnSuitGrapplingArm = &(*i);
			}
			else if (i->itemName == "Seamoth depth module mk3")
			{
				Ptr_seamothDepthModuleMK3 = &(*i);
			}
			else if (i->itemName == "Seamoth solar charger")
			{
				Ptr_seamothSolarCharger = &(*i);
			}
			else
			{
				std::cout << "ERROR : Can't set pointer of 5th " << i->itemName << "." << std::endl;
			}
		}
		std::cout << "Done set pointers." << std::endl;
	}
} // namespace Subnautica