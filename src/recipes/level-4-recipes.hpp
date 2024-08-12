#pragma once
#include "level-3-recipes.hpp"

vecofitems advancedWiringKit(int quantity) {
	vecofitems arr;
	item self = { '4', "Advanced wiring kit", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, gold(2 * quantity));
	insertvector(arr, wiringKit(1 * quantity));

	return arr;
}
vecofitems cameraDrone(int quantity) {
	vecofitems arr;
	item self = { '4', "Camera drone", quantity };

	arr.push_back(self);
	insertvector(arr, battery(1 * quantity));
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, glass(1 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems cyclopsDepthModuleMK1(int quantity) {
	vecofitems arr;
	item self = { '4', "Cyclops depth module MK1", quantity };

	arr.push_back(self);
	insertvector(arr, plasteelIngot(1 * quantity));
	insertvector(arr, ruby(3 * quantity));

	return arr;
}
vecofitems cyclopsEngineEfficiencyModule(int quantity) {
	vecofitems arr;
	item self = { '4', "Cyclops engine efficiency module", quantity };

	arr.push_back(self);
	insertvector(arr, benzene(1 * quantity));
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, polyaniline(1 * quantity));

	return arr;
}
vecofitems cyclopsSonarUpgrade(int quantity) {
	vecofitems arr;
	item self = { '4', "Cyclops sonar upgrade", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, magnetite(3 * quantity));

	return arr;
}
vecofitems engineEfficiencyModule(int quantity) {
	vecofitems arr;
	item self = { '4', "Engine efficiency module", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, polyaniline(1 * quantity));

	return arr;
}
vecofitems habitatBuilder(int quantity) {
	vecofitems arr;
	item self = { '4', "Habitat builder", quantity };

	arr.push_back(self);
	insertvector(arr, battery(1 * quantity));
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, wiringKit(1 * quantity));

	return arr;
}
vecofitems lightweightHighCapacityTank(int quantity) {
	vecofitems arr;
	item self = { '4', "Lightweight High Capacity Tank", quantity };

	arr.push_back(self);
	insertvector(arr, highCapacityO2Tank(1 * quantity));
	insertvector(arr, plasteelIngot(1 * quantity));

	return arr;
}
vecofitems medicalKitFabricator(int quantity) {
	vecofitems arr;
	item self = { '4', "Medical Kit Fabricator", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, fiberMesh(1 * quantity));
	insertvector(arr, silverOre(1 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems mobileVehicleBay(int quantity) {
	vecofitems arr;
	item self = { '4', "Mobile vehicle bay", quantity };

	arr.push_back(self);
	insertvector(arr, lubricant(1 * quantity));
	insertvector(arr, powerCell(1 * quantity));
	insertvector(arr, titaniumIngot(1 * quantity));

	return arr;
}
vecofitems modificationStation(int quantity) {
	vecofitems arr;
	item self = { '4', "Modification station", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, diamond(1 * quantity));
	insertvector(arr, lead(1 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems neptuneLaunchPlatform(int quantity) {
	vecofitems arr;
	item self = { '4', "Neptune Launch Platform", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, lead(4 * quantity));
	insertvector(arr, titaniumIngot(2 * quantity));

	return arr;
}
vecofitems observatory(int quantity) {
	vecofitems arr;
	item self = { '4', "Observatory", quantity };

	arr.push_back(self);
	insertvector(arr, enameledGlass(2 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems prawnSuit(int quantity) {
	vecofitems arr;
	item self = { '4', "Prawn suit", quantity };

	arr.push_back(self);
	insertvector(arr, aerogel(2 * quantity));
	insertvector(arr, diamond(2 * quantity));
	insertvector(arr, enameledGlass(1 * quantity));
	insertvector(arr, lead(2 * quantity));
	insertvector(arr, plasteelIngot(2 * quantity));

	return arr;
}
vecofitems prawnSuitPropulsionCannon(int quantity) {
	vecofitems arr;
	item self = { '4', "Prawn suit propulsion cannon", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, lithium(1 * quantity));
	insertvector(arr, magnetite(2 * quantity));
	insertvector(arr, titanium(5 * quantity));

	return arr;
}
vecofitems reinforcedDiveSuit(int quantity) {
	vecofitems arr;
	item self = { '4', "Reinforced dive suit", quantity };

	arr.push_back(self);
	insertvector(arr, diamond(2 * quantity));
	insertvector(arr, syntheticFibers(1 * quantity));
	insertvector(arr, titanium(2 * quantity));

	return arr;
}
vecofitems repulsionCannon(int quantity) {
	vecofitems arr;
	item self = { '4', "Repulsion cannon", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, magnetite(2 * quantity));
	insertvector(arr, propulsionCannon(1 * quantity));

	return arr;
}
vecofitems scannerRoomHUDChip(int quantity) {
	vecofitems arr;
	item self = { '4', "Scanner room hud chip", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, magnetite(1 * quantity));

	return arr;
}
vecofitems seamoth(int quantity) {
	vecofitems arr;
	item self = { '4', "Seamoth", quantity };

	arr.push_back(self);
	insertvector(arr, glass(2 * quantity));
	insertvector(arr, lead(1 * quantity));
	insertvector(arr, lubricant(1 * quantity));
	insertvector(arr, powerCell(1 * quantity));
	insertvector(arr, titaniumIngot(1 * quantity));

	return arr;
}
vecofitems seamothDepthModuleMK2(int quantity) {
	vecofitems arr;
	item self = { '4', "Seamoth depth module MK2", quantity };

	arr.push_back(self);

	insertvector(arr, seamothDepthModuleMK1(1 * quantity));
	insertvector(arr, enameledGlass(1 * quantity));
	insertvector(arr, magnetite(2 * quantity));
	insertvector(arr, plasteelIngot(1 * quantity));

	return arr;
}
vecofitems seamothPerimeterDefenseSystem(int quantity) {
	vecofitems arr;
	item self = { '4', "Seamoth perimeter defense system", quantity };

	arr.push_back(self);
	insertvector(arr, polyaniline(1 * quantity));
	insertvector(arr, wiringKit(1 * quantity));

	return arr;
}
vecofitems stasisRifle(int quantity) {
	vecofitems arr;
	item self = { '4', "Stasis rifle", quantity };

	arr.push_back(self);
	insertvector(arr, battery(1 * quantity));
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, magnetite(2 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems swimChargeFins(int quantity) {
	vecofitems arr;
	item self = { '4', "Swim charge fins", quantity };

	arr.push_back(self);
	insertvector(arr, fins(1 * quantity));
	insertvector(arr, polyaniline(1 * quantity));
	insertvector(arr, wiringKit(1 * quantity));

	return arr;
}
vecofitems thermoblade(int quantity) {
	vecofitems arr;
	item self = { '4', "Thermoblade", quantity };

	arr.push_back(self);
	insertvector(arr, battery(1 * quantity));
	insertvector(arr, survivalKnife(1 * quantity));

	return arr;
}
vecofitems ultraGlideFins(int quantity) {
	vecofitems arr;
	item self = { '4', "Ultra glide fins", quantity };

	arr.push_back(self);
	insertvector(arr, fins(1 * quantity));
	insertvector(arr, lithium(1 * quantity));
	insertvector(arr, siliconeRubber(2 * quantity));
	insertvector(arr, titanium(1 * quantity));

	return arr;
}
vecofitems ultraHighCapacityTank(int quantity) {
	vecofitems arr;
	item self = { '4', "Ultra High Capacity Tank", quantity };

	arr.push_back(self);
	insertvector(arr, highCapacityO2Tank(1 * quantity));
	insertvector(arr, lithium(4 * quantity));

	return arr;
}
vecofitems vehicleUpgradeConsole(int quantity) {
	vecofitems arr;
	item self = { '4', "Vehicle upgrade console", quantity };

	arr.push_back(self);
	insertvector(arr, computerChip(1 * quantity));
	insertvector(arr, copperWire(1 * quantity));
	insertvector(arr, titanium(3 * quantity));

	return arr;
}
