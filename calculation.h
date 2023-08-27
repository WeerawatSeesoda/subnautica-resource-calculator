#pragma once
#include "custom-type.h"
#include "recipes/level-last-recipes.h"

vecofitems calculating(inputdata input) {
	/*
	*	5TH
	*/
	if (input.name == "Cyclops") {
		return cyclops(input.number);
	}
	if (input.name == "Cyclops shield generator") {
		return cyclopsShieldGenerator(input.number);
	}
	if (input.name == "Power cell charger") {
		return powerCellCharger(input.number);
	}
	if (input.name == "Prawn suit grappling arm") {
		return prawnSuitGrapplingArm(input.number);
	}
	if (input.name == "Seamoth depth module mk3") {
		return seamothDepthModuleMK3(input.number);
	}
	if (input.name == "Seamoth solar charger") {
		return seamothSolarCharger(input.number);
	}
	//	end 5th

	/*
	*	4TH
	*/
	if (input.name == "Advanced wiring kit") {
		return advancedWiringKit(input.number);
	}
	if (input.name == "Camera drone") {
		return cameraDrone(input.number);
	}
	if (input.name == "Cyclops depth module mk1") {
		return cyclopsDepthModuleMK1(input.number);
	}
	if (input.name == "Cyclops engine efficiency module") {
		return cyclopsEngineEfficiencyModule(input.number);
	}
	if (input.name == "Cyclops sonar upgrade") {
		return cyclopsSonarUpgrade(input.number);
	}
	if (input.name == "Engine efficiency module") {
		return engineEfficiencyModule(input.number);
	}
	if (input.name == "Habitat builder") {
		return habitatBuilder(input.number);
	}
	if (input.name == "Lightweight high capacity tank") {
		return lightweightHighCapacityTank(input.number);
	}
	if (input.name == "Medical kit fabricator") {
		return medicalKitFabricator(input.number);
	}
	if (input.name == "Mobile vehicle bay") {
		return mobileVehicleBay(input.number);
	}
	if (input.name == "Modification station") {
		return modificationStation(input.number);
	}
	if (input.name == "Neptune launch platform") {
		return neptuneLaunchPlatform(input.number);
	}
	if (input.name == "Observatory") {
		return observatory(input.number);
	}
	if (input.name == "Prawn suit") {
		return prawnSuit(input.number);
	}
	if (input.name == "Prawn suit propulsion cannon") {
		return prawnSuitPropulsionCannon(input.number);
	}
	if (input.name == "Reinforced dive suit") {
		return reinforcedDiveSuit(input.number);
	}
	if (input.name == "Repulsion cannon") {
		return repulsionCannon(input.number);
	}
	if (input.name == "Scanner room hud chip") {
		return scannerRoomHUDChip(input.number);
	}
	if (input.name == "Seamoth") {
		return seamoth(input.number);
	}
	if (input.name == "Seamoth depth module mk2") {
		return seamothDepthModuleMK2(input.number);
	}
	if (input.name == "Seamoth perimeter defense system") {
		return seamothPerimeterDefenseSystem(input.number);
	}
	if (input.name == "Stasis rifle") {
		return stasisRifle(input.number);
	}
	if (input.name == "Swim charge fins") {
		return swimChargeFins(input.number);
	}
	if (input.name == "Thermoblade") {
		return thermoblade(input.number);
	}
	if (input.name == "Ultra glide fins") {
		return ultraGlideFins(input.number);
	}
	if (input.name == "Ultra high capacity tank") {
		return ultraHighCapacityTank(input.number);
	}
	if (input.name == "Vehicle upgrade console") {
		return vehicleUpgradeConsole(input.number);
	}
	//	end 4th

	/*
	*	3rd
	*/
	if (input.name == "Air bladder") {
		return airBladder(input.number);
	}
	if (input.name == "Aquarium") {
		return aquarium(input.number);
	}
	if (input.name == "Battery charger") {
		return batteryCharger(input.number);
	}
	if (input.name == "Bioreactor") {
		return bioreactor(input.number);
	}
	if (input.name == "Bulkhead") {
		return bulkhead(input.number);
	}
	if (input.name == "Computer chip") {
		return computerChip(input.number);
	}
	if (input.name == "Compass") {
		return compass(input.number);
	}
	if (input.name == "Creature decoy") {
		return creatureDecoy(input.number);
	}
	if (input.name == "Cyclops decoy tube upgrade") {
		return cyclopsDecoyTubeUpgrade(input.number);
	}
	if (input.name == "Cyclops fire suppression system") {
		return cyclopsFireSuppressionSystem(input.number);
	}
	if (input.name == "Disinfected water") {
		return disinfectedWater(input.number);
	}
	if (input.name == "Enameled glass") {
		return enameledGlass(input.number);
	}
	if (input.name == "Fins") {
		return fins(input.number);
	}
	if (input.name == "First aid kit") {
		return firstAidKit(input.number);
	}
	if (input.name == "Flashlight") {
		return flashlight(input.number);
	}
	if (input.name == "Grav trap") {
		return gravTrap(input.number);
	}
	if (input.name == "High capacity o2 tank") {
		return highCapacityO2Tank(input.number);
	}
	if (input.name == "Laser cutter") {
		return laserCutter(input.number);
	}
	if (input.name == "Light stack") {
		return lightStack(input.number);
	}
	if (input.name == "Moonpool") {
		return moonpool(input.number);
	}
	if (input.name == "Pathfinder tool") {
		return pathfinderTool(input.number);
	}
	if (input.name == "Plasteel ingot") {
		return plasteelIngot(input.number);
	}
	if (input.name == "Polyaniline") {
		return polyaniline(input.number);
	}
	if (input.name == "Power cell") {
		return powerCell(input.number);
	}
	if (input.name == "Prawn suit torpedo arm") {
		return prawnSuitTorpedoArm(input.number);
	}
	if (input.name == "Propulsion cannon") {
		return propulsionCannon(input.number);
	}
	if (input.name == "Radiation suit") {
		return radiationSuit(input.number);
	}
	if (input.name == "Rebreather") {
		return rebreather(input.number);
	}
	if (input.name == "Repair tool") {
		return repairTool(input.number);
	}
	if (input.name == "Scanner") {
		return scanner(input.number);
	}
	if (input.name == "Seaglide") {
		return seaglide(input.number);
	}
	if (input.name == "Seamoth depth module mk1") {
		return seamothDepthModuleMK1(input.number);
	}
	if (input.name == "Seamoth sonar") {
		return seamothSonar(input.number);
	}
	if (input.name == "Seamoth torpedo system") {
		return seamothTorpedoSystem(input.number);
	}
	if (input.name == "Survival knife") {
		return survivalKnife(input.number);
	}
	if (input.name == "Synthetic fibers") {
		return syntheticFibers(input.number);
	}
	if (input.name == "Thermal plant") {
		return thermalPlant(input.number);
	}
	if (input.name == "Water filtration machine") {
		return waterFiltrationMachine(input.number);
	}
	//	end 3rd

	/*
	*	2nd
	*/
	if (input.name == "Aerogel") {
		return aerogel(input.number);
	}
	if (input.name == "Basic plant pot") {
		return basicPlantPot(input.number);
	}
	if (input.name == "Battery") {
		return battery(input.number);
	}
	if (input.name == "Beacon") {
		return beacon(input.number);
	}
	if (input.name == "Benzene") {
		return benzene(input.number);
	}
	if (input.name == "Bleach") {
		return bleach(input.number);
	}
	if (input.name == "Chic plant pot") {
		return chicPlantPot(input.number);
	}
	if (input.name == "Composite plant pot") {
		return compositePlantPot(input.number);
	}
	if (input.name == "Copper wire") {
		return copperWire(input.number);
	}
	if (input.name == "Fabricator") {
		return fabricator(input.number);
	}
	if (input.name == "Fiber mesh") {
		return fiberMesh(input.number);
	}
	if (input.name == "Filtered water") {
		return filteredWater(input.number);
	}
	if (input.name == "Fire extinguisher") {
		return fireExtinguisher(input.number);
	}
	if (input.name == "Flare") {
		return flare(input.number);
	}
	if (input.name == "Floating air pump") {
		return floatingAirPump(input.number);
	}
	if (input.name == "Gas torpedo") {
		return gasTorpedo(input.number);
	}
	if (input.name == "Glass") {
		return glass(input.number);
	}
	if (input.name == "Hull reinforcement") {
		return hullReinforcement(input.number);
	}
	if (input.name == "Hydrochloric acid") {
		return hydrochloricAcid(input.number);
	}
	if (input.name == "Indoor growbed") {
		return indoorGrowbed(input.number);
	}
	if (input.name == "Ladder") {
		return ladder(input.number);
	}
	if (input.name == "Locker") {
		return locker(input.number);
	}
	if (input.name == "Lubricant") {
		return lubricant(input.number);
	}
	if (input.name == "Multipurpose room") {
		return multipurposeRoom(input.number);
	}
	if (input.name == "Pipe") {
		return pipe(input.number);
	}
	if (input.name == "Plant shelf") {
		return plantShelf(input.number);
	}
	if (input.name == "Power transmitter") {
		return powerTransmitter(input.number);
	}
	if (input.name == "Purple tablet") {
		return purpleTablet(input.number);
	}
	if (input.name == "Radio") {
		return radio(input.number);
	}
	if (input.name == "Scanner room") {
		return scannerRoom(input.number);
	}
	if (input.name == "Scanner room range upgrade") {
		return scannerRoomRangeUpgrade(input.number);
	}
	if (input.name == "Scanner room speed upgrade") {
		return scannerRoomSpeedUpgrade(input.number);
	}
	if (input.name == "Silicone rubber") {
		return siliconeRubber(input.number);
	}
	if (input.name == "Solar panel") {
		return solarPanel(input.number);
	}
	if (input.name == "Standard o2 tank") {
		return standardO2Tank(input.number);
	}
	if (input.name == "Storage module") {
		return storageModule(input.number);
	}
	if (input.name == "Titanium ingot") {
		return titaniumIngot(input.number);
	}
	if (input.name == "Vortex torpedo") {
		return vortexTorpedo(input.number);
	}
	if (input.name == "Wall locker") {
		return wallLocker(input.number);
	}
	if (input.name == "Waterproof locker") {
		return waterproofLocker(input.number);
	}
	if (input.name == "Wiring kit") {
		return wiringKit(input.number);
	}
	//	end 2nd

	item it = { '0', "Sorry, We don't khow your item. Please try again.", 0 };
	vecofitems arr;
	arr.push_back(it);
	return arr;
}