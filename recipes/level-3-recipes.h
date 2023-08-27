#pragma once
#include "level-2-recipes.h"

vecofitems airBladder(int quantity) {
	vecofitems arr;
	item self = { '3', "Air bladder", quantity };

	arr.push_back(self);

	arr.push_back(self);
	insertvector(arr, bladderfish(1 * quantity));
	insertvector(arr, siliconeRubber(1 * quantity));

	return arr;
}
vecofitems aquarium(int quantity) {
	vecofitems arr;
	item self = { '3', "Aquarium", quantity };

	arr.push_back(self);
	insertvector(arr, (glass(2 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems batteryCharger(int quantity) {
	vecofitems arr;
	item self = { '3', "Batterry charger", quantity };

	arr.push_back(self);
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems bioreactor(int quantity) {
	vecofitems arr;
	item self = { '3', "Bioreactor", quantity };

	arr.push_back(self);
	insertvector(arr, (titanium(3 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems bulkhead(int quantity) {
	vecofitems arr;
	item self = { '3', "Bulkhead", quantity };

	arr.push_back(self);
	insertvector(arr, (siliconeRubber(1 * quantity)));
	insertvector(arr, (titanium(3 * quantity)));

	return arr;
}
vecofitems computerChip(int quantity) {
	vecofitems arr;
	item self = { '3', "Computer chip", quantity };

	arr.push_back(self);
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (gold(1 * quantity)));
	insertvector(arr, (tableCoralSample(2 * quantity)));

	return arr;
}
vecofitems compass(int quantity) {
	vecofitems arr;
	item self = { '3', "Compass", quantity };

	arr.push_back(self);
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems creatureDecoy(int quantity) {
	vecofitems arr;
	item self = { '3', "Creature decoy", quantity };

	arr.push_back(self);
	insertvector(arr, (titanium(3 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems cyclopsDecoyTubeUpgrade(int quantity) {
	vecofitems arr;
	item self = { '3', "Cyclops Decoy Tube Upgrade", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(1 * quantity)));
	insertvector(arr, (lithium(2 * quantity)));
	insertvector(arr, (titanium(3 * quantity)));

	return arr;
}
vecofitems cyclopsFireSuppressionSystem(int quantity) {
	vecofitems arr;
	item self = { '3', "Cyclops fire suppression system", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(2 * quantity)));
	insertvector(arr, (crystallineSulfur(2 * quantity)));

	return arr;
}
vecofitems disinfectedWater(int quantity) {
	vecofitems arr;
	item self = { '3', "Disinfected water", quantity };

	arr.push_back(self);
	insertvector(arr, (bleach(1 * quantity)));

	return arr;
}
vecofitems enameledGlass(int quantity) {
	vecofitems arr;
	item self = { '3', "Enameled glass", quantity };

	arr.push_back(self);
	insertvector(arr, (glass(1 * quantity)));
	insertvector(arr, (stalkerTooth(1 * quantity)));

	return arr;
}
vecofitems fins(int quantity) {
	vecofitems arr;
	item self = { '3', "Fins", quantity };

	arr.push_back(self);
	insertvector(arr, (siliconeRubber(2 * quantity)));

	return arr;
}
vecofitems firstAidKit(int quantity) {
	vecofitems arr;
	item self = { '3', "First aid kit", quantity };

	arr.push_back(self);
	insertvector(arr, (fiberMesh(1 * quantity)));

	return arr;
}
vecofitems flashlight(int quantity) {
	vecofitems arr;
	item self = { '3', "Flashlight", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (glass(1 * quantity)));

	return arr;
}
vecofitems gravTrap(int quantity) {
	vecofitems arr;
	item self = { '3', "Grav trap", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (copperOre(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems highCapacityO2Tank(int quantity) {
	vecofitems arr;
	item self = { '3', "High Capacity O2 Tank", quantity };

	arr.push_back(self);
	insertvector(arr, (glass(2 * quantity)));
	insertvector(arr, (silverOre(1 * quantity)));
	insertvector(arr, (standardO2Tank(1 * quantity)));
	insertvector(arr, (titanium(4 * quantity)));

	return arr;
}
vecofitems laserCutter(int quantity) {
	vecofitems arr;
	item self = { '3', "Laser cutter", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (caveSulfur(1 * quantity)));
	insertvector(arr, (diamond(2 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems lightStack(int quantity) {
	vecofitems arr;
	item self = { '3', "Light stack", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (glass(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems moonpool(int quantity) {
	vecofitems arr;
	item self = { '3', "Moonpool", quantity };

	arr.push_back(self);
	insertvector(arr, (lead(2 * quantity)));
	insertvector(arr, (lubricant(1 * quantity)));
	insertvector(arr, (titaniumIngot(2 * quantity)));

	return arr;
}
vecofitems pathfinderTool(int quantity) {
	vecofitems arr;
	item self = { '3', "Pathfinder tool", quantity };

	arr.push_back(self);
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (creepvineSeedCluster(2 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems plasteelIngot(int quantity) {
	vecofitems arr;
	item self = { '3', "Plasteel ingot", quantity };

	arr.push_back(self);
	insertvector(arr, (lithium(2 * quantity)));
	insertvector(arr, (titaniumIngot(1 * quantity)));

	return arr;
}
vecofitems polyaniline(int quantity) {
	vecofitems arr;
	item self = { '3', "Polyaniline", quantity };

	arr.push_back(self);
	insertvector(arr, (gold(1 * quantity)));
	insertvector(arr, (hydrochloricAcid(1 * quantity)));

	return arr;
}
vecofitems powerCell(int quantity) {
	vecofitems arr;
	item self = { '3', "Power cell", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(2 * quantity)));
	insertvector(arr, (siliconeRubber(1 * quantity)));

	return arr;
}
vecofitems prawnSuitTorpedoArm(int quantity) {
	vecofitems arr;
	item self = { '3', "Prawn suit torpedo arm", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(1 * quantity)));
	insertvector(arr, (lithium(1 * quantity)));
	insertvector(arr, (titanium(5 * quantity)));

	return arr;
}
vecofitems propulsionCannon(int quantity) {
	vecofitems arr;
	item self = { '3', "Propulsion cannon", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems radiationSuit(int quantity) {
	vecofitems arr;
	item self = { '3', "Radiation suit", quantity };

	arr.push_back(self);
	insertvector(arr, (fiberMesh(2 * quantity)));
	insertvector(arr, (lead(2 * quantity)));

	return arr;
}
vecofitems rebreather(int quantity) {
	vecofitems arr;
	item self = { '3', "Rebreather", quantity };

	arr.push_back(self);
	insertvector(arr, (fiberMesh(1 * quantity)));
	insertvector(arr, (wiringKit(1 * quantity)));

	return arr;
}
vecofitems repairTool(int quantity) {
	vecofitems arr;
	item self = { '3', "Repair tool", quantity };

	arr.push_back(self);
	insertvector(arr, (caveSulfur(1 * quantity)));
	insertvector(arr, (siliconeRubber(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems scanner(int quantity) {
	vecofitems arr;
	item self = { '3', "Scanner", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems seaglide(int quantity) {
	vecofitems arr;
	item self = { '3', "Seaglide", quantity };

	arr.push_back(self);
	insertvector(arr, (battery(1 * quantity)));
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (lubricant(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems seamothDepthModuleMK1(int quantity) {
	vecofitems arr;
	item self = { '3', "Seamoth depth module MK1", quantity };

	arr.push_back(self);
	insertvector(arr, (glass(2 * quantity)));
	insertvector(arr, (titaniumIngot(1 * quantity)));

	return arr;
}
vecofitems seamothSonar(int quantity) {
	vecofitems arr;
	item self = { '3', "Seamoth sonar", quantity };

	arr.push_back(self);
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (magnetite(2 * quantity)));

	return arr;
}
vecofitems seamothTorpedoSystem(int quantity) {
	vecofitems arr;
	item self = { '3', "Seamoth torpedo system", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(1 * quantity)));
	insertvector(arr, (lithium(1 * quantity)));
	insertvector(arr, (titanium(3 * quantity)));

	return arr;
}
vecofitems survivalKnife(int quantity) {
	vecofitems arr;
	item self = { '3', "Survival knife", quantity };

	arr.push_back(self);
	insertvector(arr, (siliconeRubber(1 * quantity)));
	insertvector(arr, (titanium(1 * quantity)));

	return arr;
}
vecofitems syntheticFibers(int quantity) {
	vecofitems arr;
	item self = { '3', "Synthetic fibers", quantity };

	arr.push_back(self);
	insertvector(arr, (benzene(1 * quantity)));
	insertvector(arr, (fiberMesh(1 * quantity)));

	return arr;
}
vecofitems thermalPlant(int quantity) {
	vecofitems arr;
	item self = { '3', "Thermal plant", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(1 * quantity)));
	insertvector(arr, (magnetite(2 * quantity)));
	insertvector(arr, (titanium(5 * quantity)));

	return arr;
}
vecofitems waterFiltrationMachine(int quantity) {
	vecofitems arr;
	item self = { '3', "Water filtration machine", quantity };

	arr.push_back(self);
	insertvector(arr, (aerogel(1 * quantity)));
	insertvector(arr, (copperWire(1 * quantity)));
	insertvector(arr, (titanium(3 * quantity)));

	return arr;
}