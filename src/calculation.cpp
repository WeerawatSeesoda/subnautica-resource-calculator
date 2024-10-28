#include "calculation.hpp"
#include "custom-type.hpp"
#include "paint-text.hpp"
#include "recipes/level-last-recipes.hpp"
#include <optional>

std::optional<vecofitems> calculate5th(name_amount_pair input);
std::optional<vecofitems> calculate4th(name_amount_pair input);
std::optional<vecofitems> calculate3th(name_amount_pair input);
std::optional<vecofitems> calculate2th(name_amount_pair input);
vecofitems itemNotFound();

vecofitems calculating(name_amount_pair input) {
	std::optional<vecofitems> search_result;

	if ((search_result = calculate5th(input))) {
		return search_result.value();
	}
	if ((search_result = calculate4th(input))) {
		return search_result.value();
	}
	if ((search_result = calculate3th(input))) {
		return search_result.value();
	}
	if ((search_result = calculate2th(input))) {
		return search_result.value();
	}

	return itemNotFound();
}

vecofitems itemNotFound() {
	item it = { '0', yellow("\tSorry, We don't khow your item. Please try again.\n"), 0 };
	vecofitems arr;
	arr.push_back(it);

	return arr;
}

/*
 *	5TH
 */
std::optional<vecofitems> calculate5th(name_amount_pair input) {
	if (compare_str(input.name, "Cyclops")) {
		return cyclops(input.amount);
	}
	if (compare_str(input.name, "Cyclops shield generator")) {
		return cyclopsShieldGenerator(input.amount);
	}
	if (compare_str(input.name, "Power cell charger")) {
		return powerCellCharger(input.amount);
	}
	if (compare_str(input.name, "Prawn suit grappling arm")) {
		return prawnSuitGrapplingArm(input.amount);
	}
	if (compare_str(input.name, "Seamoth depth module mk3")) {
		return seamothDepthModuleMK3(input.amount);
	}
	if (compare_str(input.name, "Seamoth solar charger")) {
		return seamothSolarCharger(input.amount);
	}

	return std::nullopt;
}

/*
 *	4TH
 */
std::optional<vecofitems> calculate4th(name_amount_pair input) {
	if (compare_str(input.name, "Advanced wiring kit")) {
		return advancedWiringKit(input.amount);
	}
	if (compare_str(input.name, "Camera drone")) {
		return cameraDrone(input.amount);
	}
	if (compare_str(input.name, "Cyclops depth module mk1")) {
		return cyclopsDepthModuleMK1(input.amount);
	}
	if (compare_str(input.name, "Cyclops engine efficiency module")) {
		return cyclopsEngineEfficiencyModule(input.amount);
	}
	if (compare_str(input.name, "Cyclops sonar upgrade")) {
		return cyclopsSonarUpgrade(input.amount);
	}
	if (compare_str(input.name, "Engine efficiency module")) {
		return engineEfficiencyModule(input.amount);
	}
	if (compare_str(input.name, "Habitat builder")) {
		return habitatBuilder(input.amount);
	}
	if (compare_str(input.name, "Lightweight high capacity tank")) {
		return lightweightHighCapacityTank(input.amount);
	}
	if (compare_str(input.name, "Medical kit fabricator")) {
		return medicalKitFabricator(input.amount);
	}
	if (compare_str(input.name, "Mobile vehicle bay")) {
		return mobileVehicleBay(input.amount);
	}
	if (compare_str(input.name, "Modification station")) {
		return modificationStation(input.amount);
	}
	if (compare_str(input.name, "Neptune launch platform")) {
		return neptuneLaunchPlatform(input.amount);
	}
	if (compare_str(input.name, "Observatory")) {
		return observatory(input.amount);
	}
	if (compare_str(input.name, "Prawn suit")) {
		return prawnSuit(input.amount);
	}
	if (compare_str(input.name, "Prawn suit propulsion cannon")) {
		return prawnSuitPropulsionCannon(input.amount);
	}
	if (compare_str(input.name, "Reinforced dive suit")) {
		return reinforcedDiveSuit(input.amount);
	}
	if (compare_str(input.name, "Repulsion cannon")) {
		return repulsionCannon(input.amount);
	}
	if (compare_str(input.name, "Scanner room hud chip")) {
		return scannerRoomHUDChip(input.amount);
	}
	if (compare_str(input.name, "Seamoth")) {
		return seamoth(input.amount);
	}
	if (compare_str(input.name, "Seamoth depth module mk2")) {
		return seamothDepthModuleMK2(input.amount);
	}
	if (compare_str(input.name, "Seamoth perimeter defense system")) {
		return seamothPerimeterDefenseSystem(input.amount);
	}
	if (compare_str(input.name, "Stasis rifle")) {
		return stasisRifle(input.amount);
	}
	if (compare_str(input.name, "Swim charge fins")) {
		return swimChargeFins(input.amount);
	}
	if (compare_str(input.name, "Thermoblade")) {
		return thermoblade(input.amount);
	}
	if (compare_str(input.name, "Ultra glide fins")) {
		return ultraGlideFins(input.amount);
	}
	if (compare_str(input.name, "Ultra high capacity tank")) {
		return ultraHighCapacityTank(input.amount);
	}
	if (compare_str(input.name, "Vehicle upgrade console")) {
		return vehicleUpgradeConsole(input.amount);
	}

	return std::nullopt;
}

/*
 *	3TH
 */
std::optional<vecofitems> calculate3th(name_amount_pair input) {
	if (compare_str(input.name, "Air bladder")) {
		return airBladder(input.amount);
	}
	if (compare_str(input.name, "Aquarium")) {
		return aquarium(input.amount);
	}
	if (compare_str(input.name, "Battery charger")) {
		return batteryCharger(input.amount);
	}
	if (compare_str(input.name, "Bioreactor")) {
		return bioreactor(input.amount);
	}
	if (compare_str(input.name, "Bulkhead")) {
		return bulkhead(input.amount);
	}
	if (compare_str(input.name, "Computer chip")) {
		return computerChip(input.amount);
	}
	if (compare_str(input.name, "Compass")) {
		return compass(input.amount);
	}
	if (compare_str(input.name, "Creature decoy")) {
		return creatureDecoy(input.amount);
	}
	if (compare_str(input.name, "Cyclops decoy tube upgrade")) {
		return cyclopsDecoyTubeUpgrade(input.amount);
	}
	if (compare_str(input.name, "Cyclops fire suppression system")) {
		return cyclopsFireSuppressionSystem(input.amount);
	}
	if (compare_str(input.name, "Disinfected water")) {
		return disinfectedWater(input.amount);
	}
	if (compare_str(input.name, "Enameled glass")) {
		return enameledGlass(input.amount);
	}
	if (compare_str(input.name, "Fins")) {
		return fins(input.amount);
	}
	if (compare_str(input.name, "First aid kit")) {
		return firstAidKit(input.amount);
	}
	if (compare_str(input.name, "Flashlight")) {
		return flashlight(input.amount);
	}
	if (compare_str(input.name, "Floodlight")) {
		return floodlight(input.amount);
	}
	if (compare_str(input.name, "Grav trap")) {
		return gravTrap(input.amount);
	}
	if (compare_str(input.name, "High capacity o2 tank")) {
		return highCapacityO2Tank(input.amount);
	}
	if (compare_str(input.name, "Laser cutter")) {
		return laserCutter(input.amount);
	}
	if (compare_str(input.name, "Light stack")) {
		return lightStack(input.amount);
	}
	if (compare_str(input.name, "Moonpool")) {
		return moonpool(input.amount);
	}
	if (compare_str(input.name, "Pathfinder tool")) {
		return pathfinderTool(input.amount);
	}
	if (compare_str(input.name, "Plasteel ingot")) {
		return plasteelIngot(input.amount);
	}
	if (compare_str(input.name, "Polyaniline")) {
		return polyaniline(input.amount);
	}
	if (compare_str(input.name, "Power cell")) {
		return powerCell(input.amount);
	}
	if (compare_str(input.name, "Prawn suit torpedo arm")) {
		return prawnSuitTorpedoArm(input.amount);
	}
	if (compare_str(input.name, "Propulsion cannon")) {
		return propulsionCannon(input.amount);
	}
	if (compare_str(input.name, "Radiation suit")) {
		return radiationSuit(input.amount);
	}
	if (compare_str(input.name, "Rebreather")) {
		return rebreather(input.amount);
	}
	if (compare_str(input.name, "Repair tool")) {
		return repairTool(input.amount);
	}
	if (compare_str(input.name, "Scanner")) {
		return scanner(input.amount);
	}
	if (compare_str(input.name, "Seaglide")) {
		return seaglide(input.amount);
	}
	if (compare_str(input.name, "Seamoth depth module mk1")) {
		return seamothDepthModuleMK1(input.amount);
	}
	if (compare_str(input.name, "Seamoth sonar")) {
		return seamothSonar(input.amount);
	}
	if (compare_str(input.name, "Seamoth torpedo system")) {
		return seamothTorpedoSystem(input.amount);
	}
	if (compare_str(input.name, "Survival knife")) {
		return survivalKnife(input.amount);
	}
	if (compare_str(input.name, "Synthetic fibers")) {
		return syntheticFibers(input.amount);
	}
	if (compare_str(input.name, "Thermal plant")) {
		return thermalPlant(input.amount);
	}
	if (compare_str(input.name, "Water filtration machine")) {
		return waterFiltrationMachine(input.amount);
	}

	return std::nullopt;
}

/*
 *	2TH
 */
std::optional<vecofitems> calculate2th(name_amount_pair input) {
	if (compare_str(input.name, "Aerogel")) {
		return aerogel(input.amount);
	}
	if (compare_str(input.name, "Basic plant pot")) {
		return basicPlantPot(input.amount);
	}
	if (compare_str(input.name, "Battery")) {
		return battery(input.amount);
	}
	if (compare_str(input.name, "Beacon")) {
		return beacon(input.amount);
	}
	if (compare_str(input.name, "Benzene")) {
		return benzene(input.amount);
	}
	if (compare_str(input.name, "Bleach")) {
		return bleach(input.amount);
	}
	if (compare_str(input.name, "Chic plant pot")) {
		return chicPlantPot(input.amount);
	}
	if (compare_str(input.name, "Composite plant pot")) {
		return compositePlantPot(input.amount);
	}
	if (compare_str(input.name, "Copper wire")) {
		return copperWire(input.amount);
	}
	if (compare_str(input.name, "Exterior growbed")) {
		return exteriorGrowbed(input.amount);
	}
	if (compare_str(input.name, "Fabricator")) {
		return fabricator(input.amount);
	}
	if (compare_str(input.name, "Fiber mesh")) {
		return fiberMesh(input.amount);
	}
	if (compare_str(input.name, "Filtered water")) {
		return filteredWater(input.amount);
	}
	if (compare_str(input.name, "Fire extinguisher")) {
		return fireExtinguisher(input.amount);
	}
	if (compare_str(input.name, "Flare")) {
		return flare(input.amount);
	}
	if (compare_str(input.name, "Floating air pump")) {
		return floatingAirPump(input.amount);
	}
	if (compare_str(input.name, "Foundation")) {
		return foundation(input.amount);
	}
	if (compare_str(input.name, "Gas torpedo")) {
		return gasTorpedo(input.amount);
	}
	if (compare_str(input.name, "Glass")) {
		return glass(input.amount);
	}
	if (compare_str(input.name, "Hull reinforcement")) {
		return hullReinforcement(input.amount);
	}
	if (compare_str(input.name, "Hydrochloric acid")) {
		return hydrochloricAcid(input.amount);
	}
	if (compare_str(input.name, "Indoor growbed")) {
		return indoorGrowbed(input.amount);
	}
	if (compare_str(input.name, "Ladder")) {
		return ladder(input.amount);
	}
	if (compare_str(input.name, "Locker")) {
		return locker(input.amount);
	}
	if (compare_str(input.name, "Lubricant")) {
		return lubricant(input.amount);
	}
	if (compare_str(input.name, "Multipurpose room")) {
		return multipurposeRoom(input.amount);
	}
	if (compare_str(input.name, "Pipe")) {
		return pipe(input.amount);
	}
	if (compare_str(input.name, "Plant shelf")) {
		return plantShelf(input.amount);
	}
	if (compare_str(input.name, "Power transmitter")) {
		return powerTransmitter(input.amount);
	}
	if (compare_str(input.name, "Purple tablet")) {
		return purpleTablet(input.amount);
	}
	if (compare_str(input.name, "Radio")) {
		return radio(input.amount);
	}
	if (compare_str(input.name, "Scanner room")) {
		return scannerRoom(input.amount);
	}
	if (compare_str(input.name, "Scanner room range upgrade")) {
		return scannerRoomRangeUpgrade(input.amount);
	}
	if (compare_str(input.name, "Scanner room speed upgrade")) {
		return scannerRoomSpeedUpgrade(input.amount);
	}
	if (compare_str(input.name, "Silicone rubber")) {
		return siliconeRubber(input.amount);
	}
	if (compare_str(input.name, "Solar panel")) {
		return solarPanel(input.amount);
	}
	if (compare_str(input.name, "Standard o2 tank")) {
		return standardO2Tank(input.amount);
	}
	if (compare_str(input.name, "Storage module")) {
		return storageModule(input.amount);
	}
	if (compare_str(input.name, "Titanium ingot")) {
		return titaniumIngot(input.amount);
	}
	if (compare_str(input.name, "Vortex torpedo")) {
		return vortexTorpedo(input.amount);
	}
	if (compare_str(input.name, "Wall locker")) {
		return wallLocker(input.amount);
	}
	if (compare_str(input.name, "Waterproof locker")) {
		return waterproofLocker(input.amount);
	}
	if (compare_str(input.name, "Wiring kit")) {
		return wiringKit(input.amount);
	}

	return std::nullopt;
}
