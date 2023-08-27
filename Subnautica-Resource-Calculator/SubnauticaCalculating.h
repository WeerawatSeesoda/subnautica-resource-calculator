#pragma once
#include "SubnauticaInitialize.h"

namespace Subnautica
{
	/*
		void NAME(int itemNumber)
		{
			Ptr_NAME->itemNumber += 1 * itemNumber;
		}
	*/

	//
	//	1st PRIMARY
	//
	void acidMushroom(int itemNumber)
	{
		Ptr_acidMushroom->itemNumber += 1 * itemNumber;
	}
	void bladderfish(int itemNumber)
	{
		Ptr_bladderfish->itemNumber += 1 * itemNumber;
	}
	void bloodOil(int itemNumber)
	{
		Ptr_bloodOil->itemNumber += 1 * itemNumber;
	}
	void caveSulfur(int itemNumber)
	{
		Ptr_caveSulfur->itemNumber += 1 * itemNumber;
	}
	void copperOre(int itemNumber)
	{
		Ptr_copperOre->itemNumber += 1 * itemNumber;
	}
	void coralTubeSample(int itemNumber)
	{
		Ptr_coralTubeSample->itemNumber += 1 * itemNumber;
	}
	void creepvineSample(int itemNumber)
	{
		Ptr_creepvineSample->itemNumber += 1 * itemNumber;
	}
	void creepvineSeedCluster(int itemNumber)
	{
		Ptr_creepvineSeedCluster->itemNumber += 1 * itemNumber;
	}
	void crystallineSulfur(int itemNumber)
	{
		Ptr_crystallineSulfur->itemNumber += 1 * itemNumber;
	}
	void deepShroom(int itemNumber)
	{
		Ptr_deepShroom->itemNumber += 1 * itemNumber;
	}
	void diamond(int itemNumber)
	{
		Ptr_diamond->itemNumber += 1 * itemNumber;
	}
	void gasPod(int itemNumber)
	{
		Ptr_gasPod->itemNumber += 1 * itemNumber;
	}
	void gelSack(int itemNumber)
	{
		Ptr_gelSack->itemNumber += 1 * itemNumber;
	}
	void gold(int itemNumber)
	{
		Ptr_gold->itemNumber += 1 * itemNumber;
	}
	void ionCube(int itemNumber)
	{
		Ptr_ionCube->itemNumber += 1 * itemNumber;
	}
	void lead(int itemNumber)
	{
		Ptr_lead->itemNumber += 1 * itemNumber;
	}
	void lithium(int itemNumber)
	{
		Ptr_lithium->itemNumber += 1 * itemNumber;
	}
	void magnetite(int itemNumber)
	{
		Ptr_magnetite->itemNumber += 1 * itemNumber;
	}
	void quartz(int itemNumber)
	{
		Ptr_quartz->itemNumber += 1 * itemNumber;
	}
	void ruby(int itemNumber)
	{
		Ptr_ruby->itemNumber += 1 * itemNumber;
	}
	void saltDeposit(int itemNumber)
	{
		Ptr_saltDeposit->itemNumber += 1 * itemNumber;
	}
	void silverOre(int itemNumber)
	{
		Ptr_silverOre->itemNumber += 1 * itemNumber;
	}
	void stalkerTooth(int itemNumber)
	{
		Ptr_stalkerTooth->itemNumber += 1 * itemNumber;
	}
	void tableCoralSample(int itemNumber)
	{
		Ptr_tableCoralSample->itemNumber += 1 * itemNumber;
	}
	void titanium(int itemNumber)
	{
		Ptr_titanium->itemNumber += 1 * itemNumber;
	}

	/*
		void NAME(int itemNumber)
		{
			Ptr_NAME->itemNumber += 1 * itemNumber;

			SUBITEMNAME(NUMBER * itemNumber);
		}
	*/

	//
	//	2nd SECONDARY
	//
	void aerogel(int itemNumber)
	{
		Ptr_aerogel->itemNumber += 1 * itemNumber;

		gelSack(1 * itemNumber);
		ruby(1 * itemNumber);
	}
	void basicPlantPot(int itemNumber)
	{
		Ptr_basicPlantPot->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void battery(int itemNumber)
	{
		Ptr_battery->itemNumber += 1 * itemNumber;

		acidMushroom(2 * itemNumber);
		copperOre(1 * itemNumber);
	}
	void beacon(int itemNumber)
	{
		Ptr_beacon->itemNumber += 1 * itemNumber;

		copperOre(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void benzene(int itemNumber)
	{
		Ptr_benzene->itemNumber += 1 * itemNumber;

		bloodOil(3 * itemNumber);
	}
	void bleach(int itemNumber)
	{
		Ptr_bleach->itemNumber += 1 * itemNumber;

		coralTubeSample(1 * itemNumber);
		saltDeposit(1 * itemNumber);
	}
	void chicPlantPot(int itemNumber)
	{
		Ptr_chicPlantPot->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void compositePlantPot(int itemNumber)
	{
		Ptr_compositePlantPot->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void copperWire(int itemNumber)
	{
		Ptr_copperWire->itemNumber += 1 * itemNumber;

		copperOre(2 * itemNumber);
	}
	void fabricator(int itemNumber)
	{
		Ptr_fabricator->itemNumber += 1 * itemNumber;

		gold(1 * itemNumber);
		tableCoralSample(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void fiberMesh(int itemNumber)
	{
		Ptr_fiberMesh->itemNumber += 1 * itemNumber;

		creepvineSample(2 * itemNumber);
	}
	void filteredWater(int itemNumber)
	{
		Ptr_filteredWater->itemNumber += 1 * itemNumber;

		bladderfish(1 * itemNumber);
	}
	void fireExtinguisher(int itemNumber)
	{
		Ptr_fireExtinguisher->itemNumber += 1 * itemNumber;

		titanium(3 * itemNumber);
	}
	void flare(int itemNumber)
	{
		Ptr_flare->itemNumber += 1 * itemNumber;

		caveSulfur(1 * itemNumber);
	}
	void floatingAirPump(int itemNumber)
	{
		Ptr_floatingAirPump->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void gasTorpedo(int itemNumber)
	{
		Ptr_gasTorpedo->itemNumber += 1 * itemNumber;

		gasPod(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void glass(int itemNumber)
	{
		Ptr_glass->itemNumber += 1 * itemNumber;

		quartz(2 * itemNumber);
	}
	void hullReinforcement(int itemNumber)
	{
		Ptr_hullReinforcement->itemNumber += 1 * itemNumber;

		diamond(4 * itemNumber);
		lithium(1 * itemNumber);
		titanium(3 * itemNumber);
	}
	void hydrochloricAcid(int itemNumber)
	{
		Ptr_hydrochloricAcid->itemNumber += 1 * itemNumber;

		deepShroom(3 * itemNumber);
		saltDeposit(1 * itemNumber);
	}
	void indoorGrowbed(int itemNumber)
	{
		Ptr_indoorGrowbed->itemNumber += 1 * itemNumber;

		titanium(4 * itemNumber);
	}
	void ladder(int itemNumber)
	{
		Ptr_ladder->itemNumber += 1 * itemNumber;

		titanium(4 * itemNumber);
	}
	void locker(int itemNumber)
	{
		Ptr_locker->itemNumber += 1 * itemNumber;

		quartz(1 * itemNumber);
		titanium(2 * itemNumber);
	}
	void lubricant(int itemNumber)
	{
		Ptr_lubricant->itemNumber += 1 * itemNumber;

		creepvineSeedCluster(1 * itemNumber);
	}
	void multipurposeRoom(int itemNumber)
	{
		Ptr_multipurposeRoom->itemNumber += 1 * itemNumber;

		titanium(6 * itemNumber);
	}
	void pipe(int itemNumber)
	{
		Ptr_pipe->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void plantShelf(int itemNumber)
	{
		Ptr_plantShelf->itemNumber += 1 * itemNumber;

		titanium(1 * itemNumber);
	}
	void powerTransmitter(int itemNumber)
	{
		Ptr_powerTransmitter->itemNumber += 1 * itemNumber;

		gold(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void purpleTablet(int itemNumber)
	{
		Ptr_purpleTablet->itemNumber += 1 * itemNumber;

		ionCube(1 * itemNumber);
		diamond(2 * itemNumber);
	}
	void radio(int itemNumber)
	{
		Ptr_radio->itemNumber += 1 * itemNumber;

		copperOre(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void scannerRoom(int itemNumber)
	{
		Ptr_scannerRoom->itemNumber += 1 * itemNumber;

		copperOre(2 * itemNumber);
		gold(1 * itemNumber);
		tableCoralSample(1 * itemNumber);
		titanium(3 * itemNumber);
	}
	void scannerRoomRangeUpgrade(int itemNumber)
	{
		Ptr_scannerRoomRangeUpgrade->itemNumber += 1 * itemNumber;

		copperOre(1 * itemNumber);
		magnetite(1 * itemNumber);
	}
	void scannerRoomSpeedUpgrade(int itemNumber)
	{
		Ptr_scannerRoomSpeedUpgrade->itemNumber += 1 * itemNumber;

		gold(1 * itemNumber);
		silverOre(1 * itemNumber);
	}
	void siliconeRubber(int itemNumber)
	{
		Ptr_siliconeRubber->itemNumber += 1 * itemNumber;

		creepvineSeedCluster(1 * itemNumber);
	}
	void solarPanel(int itemNumber)
	{
		Ptr_solarPanel->itemNumber += 1 * itemNumber;

		copperOre(1 * itemNumber);
		quartz(2 * itemNumber);
		titanium(2 * itemNumber);
	}
	void standardO2Tank(int itemNumber)
	{
		Ptr_standardO2Tank->itemNumber += 1 * itemNumber;

		titanium(3 * itemNumber);
	}
	void storageModule(int itemNumber)
	{
		Ptr_storageModule->itemNumber += 1 * itemNumber;

		lithium(1 * itemNumber);
		titanium(3 * itemNumber);
	}
	void titaniumIngot(int itemNumber)
	{
		Ptr_titaniumIngot->itemNumber += 1 * itemNumber;

		titanium(10 * itemNumber);
	}
	void vortexTorpedo(int itemNumber)
	{
		Ptr_vortexTorpedo->itemNumber += 1 * itemNumber;

		magnetite(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void wallLocker(int itemNumber)
	{
		Ptr_wallLocker->itemNumber += 1 * itemNumber;

		titanium(2 * itemNumber);
	}
	void waterproofLocker(int itemNumber)
	{
		Ptr_waterproofLocker->itemNumber += 1 * itemNumber;

		titanium(4 * itemNumber);
	}
	void wiringKit(int itemNumber)
	{
		Ptr_wiringKit->itemNumber += 1 * itemNumber;

		silverOre(2 * itemNumber);
	}

	//
	//	3rd TERTIARY
	//
	void airBladder(int itemNumber)
	{
		Ptr_airBladder->itemNumber += 1 * itemNumber;

		bladderfish(1 * itemNumber);
		siliconeRubber(1 * itemNumber);
	}
	void aquarium(int itemNumber)
	{
		Ptr_aquarium->itemNumber += 1 * itemNumber;

		glass(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void batterryCharger(int itemNumber)
	{
		Ptr_batterryCharger->itemNumber += 1 * itemNumber;

		copperWire(1 * itemNumber);
		titanium(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void bioreactor(int itemNumber)
	{
		Ptr_bioreactor->itemNumber += 1 * itemNumber;

		titanium(3 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void bulkhead(int itemNumber)
	{
		Ptr_bulkhead->itemNumber += 1 * itemNumber;

		siliconeRubber(1 * itemNumber);
		titanium(3 * itemNumber);
	}
	void computerChip(int itemNumber)
	{
		Ptr_computerChip->itemNumber += 1 * itemNumber;

		copperWire(1 * itemNumber);
		gold(1 * itemNumber);
		tableCoralSample(2 * itemNumber);
	}
	void compass(int itemNumber)
	{
		Ptr_compass->itemNumber += 1 * itemNumber;

		copperWire(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void creatureDecoy(int itemNumber)
	{
		Ptr_creatureDecoy->itemNumber += 1 * itemNumber;

		titanium(3 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void cyclopsDecoyTubeUpgrade(int itemNumber)
	{
		Ptr_cyclopsDecoyTubeUpgrade->itemNumber += 1 * itemNumber;

		aerogel(1 * itemNumber);
		lithium(2 * itemNumber);
		titanium(3 * itemNumber);
	}
	void cyclopsFireSuppressionSystem(int itemNumber)
	{
		Ptr_cyclopsFireSuppressionSystem->itemNumber += 1 * itemNumber;

		aerogel(2 * itemNumber);
		crystallineSulfur(2 * itemNumber);
	}
	void disinfectedWater(int itemNumber)
	{
		Ptr_disinfectedWater->itemNumber += 1 * itemNumber;

		bleach(1 * itemNumber);
	}
	void enameledGlass(int itemNumber)
	{
		Ptr_enameledGlass->itemNumber += 1 * itemNumber;

		glass(1 * itemNumber);
		stalkerTooth(1 * itemNumber);
	}
	void fins(int itemNumber)
	{
		Ptr_fins->itemNumber += 1 * itemNumber;

		siliconeRubber(2 * itemNumber);
	}
	void firstAidKit(int itemNumber)
	{
		Ptr_firstAidKit->itemNumber += 1 * itemNumber;

		fiberMesh(1 * itemNumber);
	}
	void flashLight(int itemNumber)
	{
		Ptr_flashLight->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		glass(1 * itemNumber);
	}
	void gravTrap(int itemNumber)
	{
		Ptr_gravTrap->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		copperOre(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void highCapacityO2Tank(int itemNumber)
	{
		Ptr_highCapacityO2Tank->itemNumber += 1 * itemNumber;

		glass(2 * itemNumber);
		silverOre(1 * itemNumber);
		standardO2Tank(1 * itemNumber);
		titanium(4 * itemNumber);
	}
	void laserCutter(int itemNumber)
	{
		Ptr_laserCutter->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		caveSulfur(1 * itemNumber);
		diamond(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void lightStack(int itemNumber)
	{
		Ptr_lightStack->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		glass(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void moonpool(int itemNumber)
	{
		Ptr_moonpool->itemNumber += 1 * itemNumber;

		lead(2 * itemNumber);
		lubricant(1 * itemNumber);
		titaniumIngot(2 * itemNumber);
	}
	void pathfinderTool(int itemNumber)
	{
		Ptr_pathfinderTool->itemNumber += 1 * itemNumber;

		copperWire(1 * itemNumber);
		creepvineSeedCluster(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void plasteelIngot(int itemNumber)
	{
		Ptr_plasteelIngot->itemNumber += 1 * itemNumber;

		lithium(2 * itemNumber);
		titaniumIngot(1 * itemNumber);
	}
	void polyaniline(int itemNumber)
	{
		Ptr_polyaniline->itemNumber += 1 * itemNumber;

		gold(1 * itemNumber);
		hydrochloricAcid(1 * itemNumber);
	}
	void powerCell(int itemNumber)
	{
		Ptr_powerCell->itemNumber += 1 * itemNumber;

		battery(2 * itemNumber);
		siliconeRubber(1 * itemNumber);
	}
	void prawnSuitTorpedoArm(int itemNumber)
	{
		Ptr_prawnSuitTorpedoArm->itemNumber += 1 * itemNumber;

		aerogel(1 * itemNumber);
		lithium(1 * itemNumber);
		titanium(5 * itemNumber);
	}
	void propulsionCannon(int itemNumber)
	{
		Ptr_propulsionCannon->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		titanium(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void radiationSuit(int itemNumber)
	{
		Ptr_radiationSuit->itemNumber += 1 * itemNumber;

		fiberMesh(2 * itemNumber);
		lead(2 * itemNumber);
	}
	void rebreather(int itemNumber)
	{
		Ptr_rebreather->itemNumber += 1 * itemNumber;

		fiberMesh(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void repairTool(int itemNumber)
	{
		Ptr_repairTool->itemNumber += 1 * itemNumber;

		caveSulfur(1 * itemNumber);
		siliconeRubber(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void scanner(int itemNumber)
	{
		Ptr_scanner->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void seaglide(int itemNumber)
	{
		Ptr_seaglide->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		copperWire(1 * itemNumber);
		lubricant(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void seamothDepthModuleMK1(int itemNumber)
	{
		Ptr_seamothDepthModuleMK1->itemNumber += 1 * itemNumber;

		glass(2 * itemNumber);
		titaniumIngot(1 * itemNumber);
	}
	void seamothSonar(int itemNumber)
	{
		Ptr_seamothSonar->itemNumber += 1 * itemNumber;

		copperWire(1 * itemNumber);
		magnetite(2 * itemNumber);
	}
	void seamothTorpedoSystem(int itemNumber)
	{
		Ptr_seamothTorpedoSystem->itemNumber += 1 * itemNumber;

		aerogel(1 * itemNumber);
		lithium(1 * itemNumber);
		titanium(3 * itemNumber);
	}
	void survivalKnife(int itemNumber)
	{
		Ptr_survivalKnife->itemNumber += 1 * itemNumber;

		siliconeRubber(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void syntheticFibers(int itemNumber)
	{
		Ptr_syntheticFibers->itemNumber += 1 * itemNumber;

		benzene(1 * itemNumber);
		fiberMesh(1 * itemNumber);
	}
	void thermalPlant(int itemNumber)
	{
		Ptr_thermalPlant->itemNumber += 1 * itemNumber;

		aerogel(1 * itemNumber);
		magnetite(2 * itemNumber);
		titanium(5 * itemNumber);
	}
	void waterFiltrationMachine(int itemNumber)
	{
		Ptr_waterFiltrationMachine->itemNumber += 1 * itemNumber;

		aerogel(1 * itemNumber);
		copperWire(1 * itemNumber);
		titanium(3 * itemNumber);
	}

	//
	//	4th QUATERNARY
	//
	void advancedWiringKit(int itemNumber)
	{
		Ptr_advancedWiringKit->itemNumber += itemNumber;

		computerChip(1 * itemNumber);
		gold(2 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void cameraDrone(int itemNumber)
	{
		Ptr_cameraDrone->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		computerChip(1 * itemNumber);
		glass(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void cyclopsDepthModuleMK1(int itemNumber)
	{
		Ptr_cyclopsDepthModuleMK1->itemNumber += 1 * itemNumber;

		plasteelIngot(1 * itemNumber);
		ruby(3 * itemNumber);
	}
	void cyclopsEngineEfficiencyModule(int itemNumber)
	{
		Ptr_cyclopsEngineEfficiencyModule->itemNumber += 1 * itemNumber;

		benzene(1 * itemNumber);
		computerChip(1 * itemNumber);
		polyaniline(1 * itemNumber);
	}
	void cyclopsSonarUpgrade(int itemNumber)
	{
		Ptr_cyclopsSonarUpgrade->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		magnetite(3 * itemNumber);
	}
	void engineEfficiencyModule(int itemNumber)
	{
		Ptr_engineEfficiencyModule->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		polyaniline(1 * itemNumber);
	}
	void habitatBuilder(int itemNumber)
	{
		Ptr_habitatBuilder->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		computerChip(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void lightweightHighCapacityTank(int itemNumber)
	{
		Ptr_lightweightHighCapacityTank->itemNumber += 1 * itemNumber;

		highCapacityO2Tank(1 * itemNumber);
		plasteelIngot(1 * itemNumber);
	}
	void medicalKitFabricator(int itemNumber)
	{
		Ptr_medicalKitFabricator->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		fiberMesh(1 * itemNumber);
		silverOre(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void mobileVehicleBay(int itemNumber)
	{
		Ptr_mobileVehicleBay->itemNumber += 1 * itemNumber;

		lubricant(1 * itemNumber);
		powerCell(1 * itemNumber);
		titaniumIngot(1 * itemNumber);
	}
	void modificationStation(int itemNumber)
	{
		Ptr_modificationStation->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		diamond(1 * itemNumber);
		lead(1 * itemNumber);
		titanium(1 * itemNumber);
	}
	void neptuneLaunchPlatform(int itemNumber)
	{
		Ptr_neptuneLaunchPlatform->itemNumber += itemNumber;

		computerChip(1 * itemNumber);
		lead(4 * itemNumber);
		titaniumIngot(2 * itemNumber);
	}
	void observatory(int itemNumber)
	{
		Ptr_observatory->itemNumber += 1 * itemNumber;

		enameledGlass(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void prawnSuit(int itemNumber)
	{
		Ptr_prawnSuit->itemNumber += itemNumber;

		aerogel(2 * itemNumber);
		diamond(2 * itemNumber);
		enameledGlass(1 * itemNumber);
		lead(2 * itemNumber);
		plasteelIngot(2 * itemNumber);
	}
	void prawnSuitPropulsionCannon(int itemNumber)
	{
		Ptr_prawnSuitPropulsionCannon->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		lithium(1 * itemNumber);
		magnetite(2 * itemNumber);
		titanium(5 * itemNumber);
	}
	void reinforcedDiveSuit(int itemNumber)
	{
		Ptr_reinforcedDiveSuit->itemNumber += 1 * itemNumber;

		diamond(2 * itemNumber);
		syntheticFibers(1 * itemNumber);
		titanium(2 * itemNumber);
	}
	void repulsionCannon(int itemNumber)
	{
		Ptr_repulsionCannon->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		magnetite(2 * itemNumber);
		propulsionCannon(1 * itemNumber);
	}
	void scannerRoomHUDChip(int itemNumber)
	{
		Ptr_scannerRoomHUDChip->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		magnetite(1 * itemNumber);
	}
	void seamoth(int itemNumber)
	{
		Ptr_seamoth->itemNumber += 1 * itemNumber;

		glass(2 * itemNumber);
		lead(1 * itemNumber);
		lubricant(1 * itemNumber);
		powerCell(1 * itemNumber);
		titaniumIngot(1 * itemNumber);
	}
	void seamothDepthModuleMK2(int itemNumber)
	{
		Ptr_seamothDepthModuleMK2->itemNumber += 1 * itemNumber;

		seamothDepthModuleMK1(1 * itemNumber);

		enameledGlass(1 * itemNumber);
		magnetite(2 * itemNumber);
		plasteelIngot(1 * itemNumber);
	}
	void seamothPerimeterDefenseSystem(int itemNumber)
	{
		Ptr_seamothPerimeterDefenseSystem->itemNumber += 1 * itemNumber;

		polyaniline(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void stasisRifle(int itemNumber)
	{
		Ptr_stasisRifle->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		computerChip(1 * itemNumber);
		magnetite(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void swimChargeFins(int itemNumber)
	{
		Ptr_swimChargeFins->itemNumber += 1 * itemNumber;

		fins(1 * itemNumber);
		polyaniline(1 * itemNumber);
		wiringKit(1 * itemNumber);
	}
	void thermoBlade(int itemNumber)
	{
		Ptr_thermoBlade->itemNumber += 1 * itemNumber;

		battery(1 * itemNumber);
		survivalKnife(1 * itemNumber);
	}
	void ultraGlideFins(int itemNumber)
	{
		Ptr_ultraGlideFins->itemNumber += 1 * itemNumber;

		fins(1 * itemNumber);
		lithium(1 * itemNumber);
		siliconeRubber(2 * itemNumber);
		titanium(1 * itemNumber);
	}
	void ultraHighCapacityTank(int itemNumber)
	{
		Ptr_ultraHighCapacityTank->itemNumber += 1 * itemNumber;

		highCapacityO2Tank(1 * itemNumber);

		lithium(4 * itemNumber);
	}
	void vehicleUpgradeConsole(int itemNumber)
	{
		Ptr_vehicleUpgradeConsole->itemNumber += 1 * itemNumber;

		computerChip(1 * itemNumber);
		copperWire(1 * itemNumber);
		titanium(3 * itemNumber);
	}

	//
	//	5th QUINARY
	//
	void cyclops(int itemNumber)
	{
		Ptr_cyclops->itemNumber += 1 * itemNumber;

		advancedWiringKit(1 * itemNumber);
		enameledGlass(3 * itemNumber);
		lead(3 * itemNumber);
		lubricant(1 * itemNumber);
		plasteelIngot(3 * itemNumber);
	}
	void cyclopsShieldGenerator(int itemNumber)
	{
		Ptr_cyclopsShieldGenerator->itemNumber += 1 * itemNumber;

		advancedWiringKit(1 * itemNumber);
		polyaniline(1 * itemNumber);
		powerCell(1 * itemNumber);
	}
	void powerCellCharger(int itemNumber)
	{
		Ptr_powerCellCharger->itemNumber += 1 * itemNumber;

		advancedWiringKit(1 * itemNumber);
		ruby(2 * itemNumber);
		titanium(2 * itemNumber);
	}
	void prawnSuitGrapplingArm(int itemNumber)
	{
		Ptr_prawnSuitGrapplingArm->itemNumber += 1 * itemNumber;

		advancedWiringKit(1 * itemNumber);
		benzene(1 * itemNumber);
		lithium(1 * itemNumber);
		titanium(5 * itemNumber);
	}
	void seamothDepthModuleMK3(int itemNumber)
	{
		Ptr_seamothDepthModuleMK3->itemNumber += 1 * itemNumber;

		seamothDepthModuleMK2(1 * itemNumber);

		plasteelIngot(1 * itemNumber);
		ruby(3 * itemNumber);
	}
	void seamothSolarCharger(int itemNumber)
	{
		Ptr_seamothSolarCharger->itemNumber += 1 * itemNumber;

		advancedWiringKit(1 * itemNumber);
		enameledGlass(1 * itemNumber);
	}

	void calculating(item input)
	{
		/*
			else if (Ptr_NAME->itemName == input.itemName)
			{
				NAME(input.itemNumber);
			}
		*/

		//
		//	5th QUINARY
		//
		if (Ptr_cyclops->itemName == input.itemName)
		{
			cyclops(input.itemNumber);
		}
		else if (Ptr_cyclopsShieldGenerator->itemName == input.itemName)
		{
			cyclopsShieldGenerator(input.itemNumber);
		}
		else if (Ptr_powerCellCharger->itemName == input.itemName)
		{
			powerCellCharger(input.itemNumber);
		}
		else if (Ptr_prawnSuitGrapplingArm->itemName == input.itemName)
		{
			prawnSuitGrapplingArm(input.itemNumber);
		}
		else if (Ptr_seamothDepthModuleMK3->itemName == input.itemName)
		{
			seamothDepthModuleMK3(input.itemNumber);
		}
		else if (Ptr_seamothSolarCharger->itemName == input.itemName)
		{
			seamothSolarCharger(input.itemNumber);
		}

		//
		//	4th QUATERNARY
		//
		else if (Ptr_advancedWiringKit->itemName == input.itemName)
		{
			advancedWiringKit(input.itemNumber);
		}
		else if (Ptr_cameraDrone->itemName == input.itemName)
		{
			cameraDrone(input.itemNumber);
		}
		else if (Ptr_cyclopsDepthModuleMK1->itemName == input.itemName)
		{
			cyclopsDepthModuleMK1(input.itemNumber);
		}
		else if (Ptr_cyclopsEngineEfficiencyModule->itemName == input.itemName)
		{
			cyclopsEngineEfficiencyModule(input.itemNumber);
		}
		else if (Ptr_cyclopsSonarUpgrade->itemName == input.itemName)
		{
			cyclopsSonarUpgrade(input.itemNumber);
		}
		else if (Ptr_engineEfficiencyModule->itemName == input.itemName)
		{
			engineEfficiencyModule(input.itemNumber);
		}
		else if (Ptr_habitatBuilder->itemName == input.itemName)
		{
			habitatBuilder(input.itemNumber);
		}
		else if (Ptr_lightweightHighCapacityTank->itemName == input.itemName)
		{
			lightweightHighCapacityTank(input.itemNumber);
		}
		else if (Ptr_medicalKitFabricator->itemName == input.itemName)
		{
			medicalKitFabricator(input.itemNumber);
		}
		else if (Ptr_mobileVehicleBay->itemName == input.itemName)
		{
			mobileVehicleBay(input.itemNumber);
		}
		else if (Ptr_modificationStation->itemName == input.itemName)
		{
			modificationStation(input.itemNumber);
		}
		else if (Ptr_neptuneLaunchPlatform->itemName == input.itemName)
		{
			neptuneLaunchPlatform(input.itemNumber);
		}
		else if (Ptr_observatory->itemName == input.itemName)
		{
			observatory(input.itemNumber);
		}
		else if (Ptr_prawnSuit->itemName == input.itemName)
		{
			prawnSuit(input.itemNumber);
		}
		else if (Ptr_prawnSuitPropulsionCannon->itemName == input.itemName)
		{
			prawnSuitPropulsionCannon(input.itemNumber);
		}
		else if (Ptr_reinforcedDiveSuit->itemName == input.itemName)
		{
			reinforcedDiveSuit(input.itemNumber);
		}
		else if (Ptr_repulsionCannon->itemName == input.itemName)
		{
			repulsionCannon(input.itemNumber);
		}
		else if (Ptr_scannerRoomHUDChip->itemName == input.itemName)
		{
			scannerRoomHUDChip(input.itemNumber);
		}
		else if (Ptr_seamoth->itemName == input.itemName)
		{
			seamoth(input.itemNumber);
		}
		else if (Ptr_seamothDepthModuleMK2->itemName == input.itemName)
		{
			seamothDepthModuleMK2(input.itemNumber);
		}
		else if (Ptr_seamothPerimeterDefenseSystem->itemName == input.itemName)
		{
			seamothPerimeterDefenseSystem(input.itemNumber);
		}
		else if (Ptr_stasisRifle->itemName == input.itemName)
		{
			stasisRifle(input.itemNumber);
		}
		else if (Ptr_swimChargeFins->itemName == input.itemName)
		{
			swimChargeFins(input.itemNumber);
		}
		else if (Ptr_ultraGlideFins->itemName == input.itemName)
		{
			ultraGlideFins(input.itemNumber);
		}
		else if (Ptr_ultraHighCapacityTank->itemName == input.itemName)
		{
			ultraHighCapacityTank(input.itemNumber);
		}
		else if (Ptr_vehicleUpgradeConsole->itemName == input.itemName)
		{
			vehicleUpgradeConsole(input.itemNumber);
		}

		//
		//	3rd TERTIARY
		//
		else if (Ptr_airBladder->itemName == input.itemName)
		{
			airBladder(input.itemNumber);
		}
		else if (Ptr_aquarium->itemName == input.itemName)
		{
			aquarium(input.itemNumber);
		}
		else if (Ptr_batterryCharger->itemName == input.itemName)
		{
			batterryCharger(input.itemNumber);
		}
		else if (Ptr_bioreactor->itemName == input.itemName)
		{
			bioreactor(input.itemNumber);
		}
		else if (Ptr_bulkhead->itemName == input.itemName)
		{
			bulkhead(input.itemNumber);
		}
		else if (Ptr_computerChip->itemName == input.itemName)
		{
			computerChip(input.itemNumber);
		}
		else if (Ptr_compass->itemName == input.itemName)
		{
			compass(input.itemNumber);
		}
		else if (Ptr_creatureDecoy->itemName == input.itemName)
		{
			creatureDecoy(input.itemNumber);
		}
		else if (Ptr_cyclopsDecoyTubeUpgrade->itemName == input.itemName)
		{
			cyclopsDecoyTubeUpgrade(input.itemNumber);
		}
		else if (Ptr_cyclopsFireSuppressionSystem->itemName == input.itemName)
		{
			cyclopsFireSuppressionSystem(input.itemNumber);
		}
		else if (Ptr_disinfectedWater->itemName == input.itemName)
		{
			disinfectedWater(input.itemNumber);
		}
		else if (Ptr_enameledGlass->itemName == input.itemName)
		{
			enameledGlass(input.itemNumber);
		}
		else if (Ptr_fins->itemName == input.itemName)
		{
			fins(input.itemNumber);
		}
		else if (Ptr_firstAidKit->itemName == input.itemName)
		{
			firstAidKit(input.itemNumber);
		}
		else if (Ptr_flashLight->itemName == input.itemName)
		{
			flashLight(input.itemNumber);
		}
		else if (Ptr_gravTrap->itemName == input.itemName)
		{
			gravTrap(input.itemNumber);
		}
		else if (Ptr_highCapacityO2Tank->itemName == input.itemName)
		{
			highCapacityO2Tank(input.itemNumber);
		}
		else if (Ptr_laserCutter->itemName == input.itemName)
		{
			laserCutter(input.itemNumber);
		}
		else if (Ptr_lightStack->itemName == input.itemName)
		{
			lightStack(input.itemNumber);
		}
		else if (Ptr_moonpool->itemName == input.itemName)
		{
			moonpool(input.itemNumber);
		}
		else if (Ptr_pathfinderTool->itemName == input.itemName)
		{
			pathfinderTool(input.itemNumber);
		}
		else if (Ptr_plasteelIngot->itemName == input.itemName)
		{
			plasteelIngot(input.itemNumber);
		}
		else if (Ptr_polyaniline->itemName == input.itemName)
		{
			polyaniline(input.itemNumber);
		}
		else if (Ptr_powerCell->itemName == input.itemName)
		{
			powerCell(input.itemNumber);
		}
		else if (Ptr_prawnSuitTorpedoArm->itemName == input.itemName)
		{
			prawnSuitTorpedoArm(input.itemNumber);
		}
		else if (Ptr_propulsionCannon->itemName == input.itemName)
		{
			propulsionCannon(input.itemNumber);
		}
		else if (Ptr_radiationSuit->itemName == input.itemName)
		{
			radiationSuit(input.itemNumber);
		}
		else if (Ptr_rebreather->itemName == input.itemName)
		{
			rebreather(input.itemNumber);
		}
		else if (Ptr_repairTool->itemName == input.itemName)
		{
			repairTool(input.itemNumber);
		}
		else if (Ptr_scanner->itemName == input.itemName)
		{
			scanner(input.itemNumber);
		}
		else if (Ptr_seaglide->itemName == input.itemName)
		{
			seaglide(input.itemNumber);
		}
		else if (Ptr_seamothDepthModuleMK1->itemName == input.itemName)
		{
			seamothDepthModuleMK1(input.itemNumber);
		}
		else if (Ptr_seamothSonar->itemName == input.itemName)
		{
			seamothSonar(input.itemNumber);
		}
		else if (Ptr_seamothTorpedoSystem->itemName == input.itemName)
		{
			seamothTorpedoSystem(input.itemNumber);
		}
		else if (Ptr_survivalKnife->itemName == input.itemName)
		{
			survivalKnife(input.itemNumber);
		}
		else if (Ptr_syntheticFibers->itemName == input.itemName)
		{
			syntheticFibers(input.itemNumber);
		}
		else if (Ptr_thermalPlant->itemName == input.itemName)
		{
			thermalPlant(input.itemNumber);
		}
		else if (Ptr_waterFiltrationMachine->itemName == input.itemName)
		{
			waterFiltrationMachine(input.itemNumber);
		}

		//
		//	2nd SECONDARY
		//
		else if (Ptr_aerogel->itemName == input.itemName)
		{
			aerogel(input.itemNumber);
		}
		else if (Ptr_basicPlantPot->itemName == input.itemName)
		{
			basicPlantPot(input.itemNumber);
		}
		else if (Ptr_battery->itemName == input.itemName)
		{
			battery(input.itemNumber);
		}
		else if (Ptr_beacon->itemName == input.itemName)
		{
			beacon(input.itemNumber);
		}
		else if (Ptr_benzene->itemName == input.itemName)
		{
			benzene(input.itemNumber);
		}
		else if (Ptr_bleach->itemName == input.itemName)
		{
			bleach(input.itemNumber);
		}
		else if (Ptr_chicPlantPot->itemName == input.itemName)
		{
			chicPlantPot(input.itemNumber);
		}
		else if (Ptr_compositePlantPot->itemName == input.itemName)
		{
			compositePlantPot(input.itemNumber);
		}
		else if (Ptr_copperWire->itemName == input.itemName)
		{
			copperWire(input.itemNumber);
		}
		else if (Ptr_fabricator->itemName == input.itemName)
		{
			fabricator(input.itemNumber);
		}
		else if (Ptr_fiberMesh->itemName == input.itemName)
		{
			fiberMesh(input.itemNumber);
		}
		else if (Ptr_filteredWater->itemName == input.itemName)
		{
			filteredWater(input.itemNumber);
		}
		else if (Ptr_fireExtinguisher->itemName == input.itemName)
		{
			fireExtinguisher(input.itemNumber);
		}
		else if (Ptr_flare->itemName == input.itemName)
		{
			flare(input.itemNumber);
		}
		else if (Ptr_floatingAirPump->itemName == input.itemName)
		{
			floatingAirPump(input.itemNumber);
		}
		else if (Ptr_gasTorpedo->itemName == input.itemName)
		{
			gasTorpedo(input.itemNumber);
		}
		else if (Ptr_glass->itemName == input.itemName)
		{
			glass(input.itemNumber);
		}
		else if (Ptr_hullReinforcement->itemName == input.itemName)
		{
			hullReinforcement(input.itemNumber);
		}
		else if (Ptr_hydrochloricAcid->itemName == input.itemName)
		{
			hydrochloricAcid(input.itemNumber);
		}
		else if (Ptr_indoorGrowbed->itemName == input.itemName)
		{
			indoorGrowbed(input.itemNumber);
		}
		else if (Ptr_ladder->itemName == input.itemName)
		{
			ladder(input.itemNumber);
		}
		else if (Ptr_locker->itemName == input.itemName)
		{
			locker(input.itemNumber);
		}
		else if (Ptr_lubricant->itemName == input.itemName)
		{
			lubricant(input.itemNumber);
		}
		else if (Ptr_multipurposeRoom->itemName == input.itemName)
		{
			multipurposeRoom(input.itemNumber);
		}
		else if (Ptr_pipe->itemName == input.itemName)
		{
			pipe(input.itemNumber);
		}
		else if (Ptr_plantShelf->itemName == input.itemName)
		{
			plantShelf(input.itemNumber);
		}
		else if (Ptr_powerTransmitter->itemName == input.itemName)
		{
			powerTransmitter(input.itemNumber);
		}
		else if (Ptr_purpleTablet->itemName == input.itemName)
		{
			purpleTablet(input.itemNumber);
		}
		else if (Ptr_radio->itemName == input.itemName)
		{
			radio(input.itemNumber);
		}
		else if (Ptr_scannerRoom->itemName == input.itemName)
		{
			scannerRoom(input.itemNumber);
		}
		else if (Ptr_scannerRoomRangeUpgrade->itemName == input.itemName)
		{
			scannerRoomRangeUpgrade(input.itemNumber);
		}
		else if (Ptr_scannerRoomSpeedUpgrade->itemName == input.itemName)
		{
			scannerRoomSpeedUpgrade(input.itemNumber);
		}
		else if (Ptr_siliconeRubber->itemName == input.itemName)
		{
			siliconeRubber(input.itemNumber);
		}
		else if (Ptr_solarPanel->itemName == input.itemName)
		{
			solarPanel(input.itemNumber);
		}
		else if (Ptr_standardO2Tank->itemName == input.itemName)
		{
			standardO2Tank(input.itemNumber);
		}
		else if (Ptr_storageModule->itemName == input.itemName)
		{
			storageModule(input.itemNumber);
		}
		else if (Ptr_titaniumIngot->itemName == input.itemName)
		{
			titaniumIngot(input.itemNumber);
		}
		else if (Ptr_vortexTorpedo->itemName == input.itemName)
		{
			vortexTorpedo(input.itemNumber);
		}
		else if (Ptr_wallLocker->itemName == input.itemName)
		{
			wallLocker(input.itemNumber);
		}
		else if (Ptr_waterproofLocker->itemName == input.itemName)
		{
			waterproofLocker(input.itemNumber);
		}
		else if (Ptr_wiringKit->itemName == input.itemName)
		{
			wiringKit(input.itemNumber);
		}
	}
} // namespace Subnautica