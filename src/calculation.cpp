#include <optional>
#include "calculation.hpp"
#include "custom-type.hpp"
#include "recipes/level-last-recipes.hpp"

std::optional<vecofitems> calculate5th(inputdata input);
std::optional<vecofitems> calculate4th(inputdata input);
std::optional<vecofitems> calculate3th(inputdata input);
std::optional<vecofitems> calculate2th(inputdata input);
vecofitems itemNotFound();

vecofitems calculating(inputdata input) {
	std::optional<vecofitems> search_result;

	if (search_result = calculate5th(input)) {
		return search_result.value();
	}
	if (search_result = calculate4th(input)) {
		return search_result.value();
	}
	if (search_result = calculate3th(input)) {
		return search_result.value();
	}
	if (search_result = calculate2th(input)) {
		return search_result.value();
	}

	return itemNotFound();
}


vecofitems itemNotFound() {
	item it = { '0', "Sorry, We don't khow your item. Please try again.", 0 };
	vecofitems arr;
	arr.push_back(it);

	return arr;
}

/*
 *	5TH
 */
std::optional<vecofitems> calculate5th(inputdata input) {
	if (compare_str(input.name, "Cyclops")) {
		return cyclops(input.number);
	}
	if (compare_str(input.name, "Cyclops shield generator")) {
		return cyclopsShieldGenerator(input.number);
	}
	if (compare_str(input.name, "Power cell charger")) {
		return powerCellCharger(input.number);
	}
	if (compare_str(input.name, "Prawn suit grappling arm")) {
		return prawnSuitGrapplingArm(input.number);
	}
	if (compare_str(input.name, "Seamoth depth module mk3")) {
		return seamothDepthModuleMK3(input.number);
	}
	if (compare_str(input.name, "Seamoth solar charger")) {
		return seamothSolarCharger(input.number);
	}

	return std::nullopt;
}

/*
 *	4TH
 */
std::optional<vecofitems> calculate4th(inputdata input) {
	if (compare_str(input.name, "Advanced wiring kit")) {
		return advancedWiringKit(input.number);
	}
	if (compare_str(input.name, "Camera drone")) {
		return cameraDrone(input.number);
	}
	if (compare_str(input.name, "Cyclops depth module mk1")) {
		return cyclopsDepthModuleMK1(input.number);
	}
	if (compare_str(input.name, "Cyclops engine efficiency module")) {
		return cyclopsEngineEfficiencyModule(input.number);
	}
	if (compare_str(input.name, "Cyclops sonar upgrade")) {
		return cyclopsSonarUpgrade(input.number);
	}
	if (compare_str(input.name, "Engine efficiency module")) {
		return engineEfficiencyModule(input.number);
	}
	if (compare_str(input.name, "Habitat builder")) {
		return habitatBuilder(input.number);
	}
	if (compare_str(input.name, "Lightweight high capacity tank")) {
		return lightweightHighCapacityTank(input.number);
	}
	if (compare_str(input.name, "Medical kit fabricator")) {
		return medicalKitFabricator(input.number);
	}
	if (compare_str(input.name, "Mobile vehicle bay")) {
		return mobileVehicleBay(input.number);
	}
	if (compare_str(input.name, "Modification station")) {
		return modificationStation(input.number);
	}
	if (compare_str(input.name, "Neptune launch platform")) {
		return neptuneLaunchPlatform(input.number);
	}
	if (compare_str(input.name, "Observatory")) {
		return observatory(input.number);
	}
	if (compare_str(input.name, "Prawn suit")) {
		return prawnSuit(input.number);
	}
	if (compare_str(input.name, "Prawn suit propulsion cannon")) {
		return prawnSuitPropulsionCannon(input.number);
	}
	if (compare_str(input.name, "Reinforced dive suit")) {
		return reinforcedDiveSuit(input.number);
	}
	if (compare_str(input.name, "Repulsion cannon")) {
		return repulsionCannon(input.number);
	}
	if (compare_str(input.name, "Scanner room hud chip")) {
		return scannerRoomHUDChip(input.number);
	}
	if (compare_str(input.name, "Seamoth")) {
		return seamoth(input.number);
	}
	if (compare_str(input.name, "Seamoth depth module mk2")) {
		return seamothDepthModuleMK2(input.number);
	}
	if (compare_str(input.name, "Seamoth perimeter defense system")) {
		return seamothPerimeterDefenseSystem(input.number);
	}
	if (compare_str(input.name, "Stasis rifle")) {
		return stasisRifle(input.number);
	}
	if (compare_str(input.name, "Swim charge fins")) {
		return swimChargeFins(input.number);
	}
	if (compare_str(input.name, "Thermoblade")) {
		return thermoblade(input.number);
	}
	if (compare_str(input.name, "Ultra glide fins")) {
		return ultraGlideFins(input.number);
	}
	if (compare_str(input.name, "Ultra high capacity tank")) {
		return ultraHighCapacityTank(input.number);
	}
	if (compare_str(input.name, "Vehicle upgrade console")) {
		return vehicleUpgradeConsole(input.number);
	}

	return std::nullopt;
}

/*
 *	3TH
 */
std::optional<vecofitems> calculate3th(inputdata input) {
	if (compare_str(input.name, "Air bladder")) {
		return airBladder(input.number);
	}
	if (compare_str(input.name, "Aquarium")) {
		return aquarium(input.number);
	}
	if (compare_str(input.name, "Battery charger")) {
		return batteryCharger(input.number);
	}
	if (compare_str(input.name, "Bioreactor")) {
		return bioreactor(input.number);
	}
	if (compare_str(input.name, "Bulkhead")) {
		return bulkhead(input.number);
	}
	if (compare_str(input.name, "Computer chip")) {
		return computerChip(input.number);
	}
	if (compare_str(input.name, "Compass")) {
		return compass(input.number);
	}
	if (compare_str(input.name, "Creature decoy")) {
		return creatureDecoy(input.number);
	}
	if (compare_str(input.name, "Cyclops decoy tube upgrade")) {
		return cyclopsDecoyTubeUpgrade(input.number);
	}
	if (compare_str(input.name, "Cyclops fire suppression system")) {
		return cyclopsFireSuppressionSystem(input.number);
	}
	if (compare_str(input.name, "Disinfected water")) {
		return disinfectedWater(input.number);
	}
	if (compare_str(input.name, "Enameled glass")) {
		return enameledGlass(input.number);
	}
	if (compare_str(input.name, "Fins")) {
		return fins(input.number);
	}
	if (compare_str(input.name, "First aid kit")) {
		return firstAidKit(input.number);
	}
	if (compare_str(input.name, "Flashlight")) {
		return flashlight(input.number);
	}
	if (compare_str(input.name, "Floodlight")) {
		return floodlight(input.number);
	}
	if (compare_str(input.name, "Grav trap")) {
		return gravTrap(input.number);
	}
	if (compare_str(input.name, "High capacity o2 tank")) {
		return highCapacityO2Tank(input.number);
	}
	if (compare_str(input.name, "Laser cutter")) {
		return laserCutter(input.number);
	}
	if (compare_str(input.name, "Light stack")) {
		return lightStack(input.number);
	}
	if (compare_str(input.name, "Moonpool")) {
		return moonpool(input.number);
	}
	if (compare_str(input.name, "Pathfinder tool")) {
		return pathfinderTool(input.number);
	}
	if (compare_str(input.name, "Plasteel ingot")) {
		return plasteelIngot(input.number);
	}
	if (compare_str(input.name, "Polyaniline")) {
		return polyaniline(input.number);
	}
	if (compare_str(input.name, "Power cell")) {
		return powerCell(input.number);
	}
	if (compare_str(input.name, "Prawn suit torpedo arm")) {
		return prawnSuitTorpedoArm(input.number);
	}
	if (compare_str(input.name, "Propulsion cannon")) {
		return propulsionCannon(input.number);
	}
	if (compare_str(input.name, "Radiation suit")) {
		return radiationSuit(input.number);
	}
	if (compare_str(input.name, "Rebreather")) {
		return rebreather(input.number);
	}
	if (compare_str(input.name, "Repair tool")) {
		return repairTool(input.number);
	}
	if (compare_str(input.name, "Scanner")) {
		return scanner(input.number);
	}
	if (compare_str(input.name, "Seaglide")) {
		return seaglide(input.number);
	}
	if (compare_str(input.name, "Seamoth depth module mk1")) {
		return seamothDepthModuleMK1(input.number);
	}
	if (compare_str(input.name, "Seamoth sonar")) {
		return seamothSonar(input.number);
	}
	if (compare_str(input.name, "Seamoth torpedo system")) {
		return seamothTorpedoSystem(input.number);
	}
	if (compare_str(input.name, "Survival knife")) {
		return survivalKnife(input.number);
	}
	if (compare_str(input.name, "Synthetic fibers")) {
		return syntheticFibers(input.number);
	}
	if (compare_str(input.name, "Thermal plant")) {
		return thermalPlant(input.number);
	}
	if (compare_str(input.name, "Water filtration machine")) {
		return waterFiltrationMachine(input.number);
	}

	return std::nullopt;
}

/*
 *	2TH
 */
std::optional<vecofitems> calculate2th(inputdata input) {
	if (compare_str(input.name, "Aerogel")) {
		return aerogel(input.number);
	}
	if (compare_str(input.name, "Basic plant pot")) {
		return basicPlantPot(input.number);
	}
	if (compare_str(input.name, "Battery")) {
		return battery(input.number);
	}
	if (compare_str(input.name, "Beacon")) {
		return beacon(input.number);
	}
	if (compare_str(input.name, "Benzene")) {
		return benzene(input.number);
	}
	if (compare_str(input.name, "Bleach")) {
		return bleach(input.number);
	}
	if (compare_str(input.name, "Chic plant pot")) {
		return chicPlantPot(input.number);
	}
	if (compare_str(input.name, "Composite plant pot")) {
		return compositePlantPot(input.number);
	}
	if (compare_str(input.name, "Copper wire")) {
		return copperWire(input.number);
	}
	if (compare_str(input.name, "Exterior growbed")) {
		return exteriorGrowbed(input.number);
	}
	if (compare_str(input.name, "Fabricator")) {
		return fabricator(input.number);
	}
	if (compare_str(input.name, "Fiber mesh")) {
		return fiberMesh(input.number);
	}
	if (compare_str(input.name, "Filtered water")) {
		return filteredWater(input.number);
	}
	if (compare_str(input.name, "Fire extinguisher")) {
		return fireExtinguisher(input.number);
	}
	if (compare_str(input.name, "Flare")) {
		return flare(input.number);
	}
	if (compare_str(input.name, "Floating air pump")) {
		return floatingAirPump(input.number);
	}
	if (compare_str(input.name, "Foundation")) {
		return foundation(input.number);
	}
	if (compare_str(input.name, "Gas torpedo")) {
		return gasTorpedo(input.number);
	}
	if (compare_str(input.name, "Glass")) {
		return glass(input.number);
	}
	if (compare_str(input.name, "Hull reinforcement")) {
		return hullReinforcement(input.number);
	}
	if (compare_str(input.name, "Hydrochloric acid")) {
		return hydrochloricAcid(input.number);
	}
	if (compare_str(input.name, "Indoor growbed")) {
		return indoorGrowbed(input.number);
	}
	if (compare_str(input.name, "Ladder")) {
		return ladder(input.number);
	}
	if (compare_str(input.name, "Locker")) {
		return locker(input.number);
	}
	if (compare_str(input.name, "Lubricant")) {
		return lubricant(input.number);
	}
	if (compare_str(input.name, "Multipurpose room")) {
		return multipurposeRoom(input.number);
	}
	if (compare_str(input.name, "Pipe")) {
		return pipe(input.number);
	}
	if (compare_str(input.name, "Plant shelf")) {
		return plantShelf(input.number);
	}
	if (compare_str(input.name, "Power transmitter")) {
		return powerTransmitter(input.number);
	}
	if (compare_str(input.name, "Purple tablet")) {
		return purpleTablet(input.number);
	}
	if (compare_str(input.name, "Radio")) {
		return radio(input.number);
	}
	if (compare_str(input.name, "Scanner room")) {
		return scannerRoom(input.number);
	}
	if (compare_str(input.name, "Scanner room range upgrade")) {
		return scannerRoomRangeUpgrade(input.number);
	}
	if (compare_str(input.name, "Scanner room speed upgrade")) {
		return scannerRoomSpeedUpgrade(input.number);
	}
	if (compare_str(input.name, "Silicone rubber")) {
		return siliconeRubber(input.number);
	}
	if (compare_str(input.name, "Solar panel")) {
		return solarPanel(input.number);
	}
	if (compare_str(input.name, "Standard o2 tank")) {
		return standardO2Tank(input.number);
	}
	if (compare_str(input.name, "Storage module")) {
		return storageModule(input.number);
	}
	if (compare_str(input.name, "Titanium ingot")) {
		return titaniumIngot(input.number);
	}
	if (compare_str(input.name, "Vortex torpedo")) {
		return vortexTorpedo(input.number);
	}
	if (compare_str(input.name, "Wall locker")) {
		return wallLocker(input.number);
	}
	if (compare_str(input.name, "Waterproof locker")) {
		return waterproofLocker(input.number);
	}
	if (compare_str(input.name, "Wiring kit")) {
		return wiringKit(input.number);
	}

	return std::nullopt;
}

