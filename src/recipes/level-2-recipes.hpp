#pragma once
#include "level-1-recipes.h"
#include "../libs.h"

vecofitems aerogel(int number) {
	vecofitems arr;
	item self = { '2', "Aerogel", number };

	arr.push_back(self);

	insertvector(arr, gelSack(1 * number));
	insertvector(arr, ruby(1 * number));

	return arr;
}
vecofitems basicPlantPot(int number) {
	vecofitems arr;
	item self = { '2', "Basic plant pot", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems battery(int number) {
	vecofitems arr;
	item self = { '2', "Battery", number };

	arr.push_back(self);
	insertvector(arr, acidMushroom(2 * number));
	insertvector(arr, copperOre(1 * number));

	return arr;
}
vecofitems beacon(int number) {
	vecofitems arr;
	item self = { '2', "Beacon", number };

	arr.push_back(self);
	insertvector(arr, copperOre(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems benzene(int number) {
	vecofitems arr;
	item self = { '2', "Benzene", number };

	arr.push_back(self);
	insertvector(arr, bloodOil(3 * number));

	return arr;
}
vecofitems bleach(int number) {
	vecofitems arr;
	item self = { '2', "Bleach", number };

	arr.push_back(self);
	insertvector(arr, coralTubeSample(1 * number));
	insertvector(arr, saltDeposit(1 * number));

	return arr;
}
vecofitems chicPlantPot(int number) {
	vecofitems arr;
	item self = { '2', "Chic plant pot", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems compositePlantPot(int number) {
	vecofitems arr;
	item self = { '2', "Composite plant pot", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems copperWire(int number) {
	vecofitems arr;
	item self = { '2', "Copper wire", number };

	arr.push_back(self);
	insertvector(arr, copperOre(2 * number));

	return arr;
}
vecofitems exteriorGrowbed(int number) {
	vecofitems arr;
	item self = { '2', "Exterior growbed", number};

	arr.push_back(self);
	insertvector(arr, titanium(2*number));

	return arr;
}
vecofitems fabricator(int number) {
	vecofitems arr;
	item self = { '2', "Fabricator", number };

	arr.push_back(self);
	insertvector(arr, gold(1 * number));
	insertvector(arr, tableCoralSample(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems fiberMesh(int number) {
	vecofitems arr;
	item self = { '2', "Fiber mesh", number };

	arr.push_back(self);
	insertvector(arr, creepvineSample(2 * number));

	return arr;
}
vecofitems filteredWater(int number) {
	vecofitems arr;
	item self = { '2', "Filtered water", number };

	arr.push_back(self);
	insertvector(arr, bladderfish(1 * number));

	return arr;
}
vecofitems fireExtinguisher(int number) {
	vecofitems arr;
	item self = { '2', "Fire extinguisher", number };

	arr.push_back(self);
	insertvector(arr, titanium(3 * number));

	return arr;
}
vecofitems flare(int number) {
	vecofitems arr;
	item self = { '2', "Flare", number };

	arr.push_back(self);
	insertvector(arr, caveSulfur(1 * number));

	return arr;
}
vecofitems floatingAirPump(int number) {
	vecofitems arr;
	item self = { '2', "Floating air pump", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems foundation(int number) {
	vecofitems arr;
	item self = { '2', "Foundation", number};

	arr.push_back(self);
	insertvector(arr, lead(2 * number));
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems gasTorpedo(int number) {
	vecofitems arr;
	item self = { '2', "Gas torpedo", number };

	arr.push_back(self);
	insertvector(arr, gasPod(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems glass(int number) {
	vecofitems arr;
	item self = { '2', "Glass", number };

	arr.push_back(self);
	insertvector(arr, quartz(2 * number));

	return arr;
}
vecofitems hullReinforcement(int number) {
	vecofitems arr;
	item self = { '2', "Hull reinforcement", number };

	arr.push_back(self);
	insertvector(arr, diamond(4 * number));
	insertvector(arr, lithium(1 * number));
	insertvector(arr, titanium(3 * number));

	return arr;
}
vecofitems hydrochloricAcid(int number) {
	vecofitems arr;
	item self = { '2', "Hydrochloric acid", number };

	arr.push_back(self);
	insertvector(arr, deepShroom(3 * number));
	insertvector(arr, saltDeposit(1 * number));

	return arr;
}
vecofitems indoorGrowbed(int number) {
	vecofitems arr;
	item self = { '2', "Indoor growbed", number };

	arr.push_back(self);
	insertvector(arr, titanium(4 * number));

	return arr;
}
vecofitems ladder(int number) {
	vecofitems arr;
	item self = { '2', "Ladder", number };

	arr.push_back(self);
	insertvector(arr, titanium(4 * number));

	return arr;
}
vecofitems locker(int number) {
	vecofitems arr;
	item self = { '2', "Locker", number };

	arr.push_back(self);
	insertvector(arr, quartz(1 * number));
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems lubricant(int number) {
	vecofitems arr;
	item self = { '2', "Lubricant", number };

	arr.push_back(self);
	insertvector(arr, creepvineSeedCluster(1 * number));

	return arr;
}
vecofitems multipurposeRoom(int number) {
	vecofitems arr;
	item self = { '2', "Multipurpose room", number };

	arr.push_back(self);
	insertvector(arr, titanium(6 * number));

	return arr;
}
vecofitems pipe(int number) {
	vecofitems arr;
	item self = { '2', "Pipe", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems plantShelf(int number) {
	vecofitems arr;
	item self = { '2', "Plant shelf", number };

	arr.push_back(self);
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems powerTransmitter(int number) {
	vecofitems arr;
	item self = { '2', "Power transmitter", number };

	arr.push_back(self);
	insertvector(arr, gold(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems purpleTablet(int number) {
	vecofitems arr;
	item self = { '2', "Purple tablet", number };

	arr.push_back(self);
	insertvector(arr, ionCube(1 * number));
	insertvector(arr, diamond(2 * number));

	return arr;
}
vecofitems radio(int number) {
	vecofitems arr;
	item self = { '2', "Radio", number };

	arr.push_back(self);
	insertvector(arr, copperOre(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems scannerRoom(int number) {
	vecofitems arr;
	item self = { '2', "Scanner room", number };

	arr.push_back(self);
	insertvector(arr, copperOre(2 * number));
	insertvector(arr, gold(1 * number));
	insertvector(arr, tableCoralSample(1 * number));
	insertvector(arr, titanium(3 * number));

	return arr;
}
vecofitems scannerRoomRangeUpgrade(int number) {
	vecofitems arr;
	item self = { '2', "Scanner room range upgrade", number };

	arr.push_back(self);
	insertvector(arr, copperOre(1 * number));
	insertvector(arr, magnetite(1 * number));

	return arr;
}
vecofitems scannerRoomSpeedUpgrade(int number) {
	vecofitems arr;
	item self = { '2', "Scanner room speed upgrade", number };

	arr.push_back(self);
	insertvector(arr, gold(1 * number));
	insertvector(arr, silverOre(1 * number));

	return arr;
}
vecofitems siliconeRubber(int number) {
	vecofitems arr;
	item self = { '2', "Silicone rubber", number };

	arr.push_back(self);
	insertvector(arr, creepvineSeedCluster(1 * number));

	return arr;
}
vecofitems solarPanel(int number) {
	vecofitems arr;
	item self = { '2', "Solar panel", number };

	arr.push_back(self);
	insertvector(arr, copperOre(1 * number));
	insertvector(arr, quartz(2 * number));
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems standardO2Tank(int number) {
	vecofitems arr;
	item self = { '2', "Standard o2 tank", number };

	arr.push_back(self);
	insertvector(arr, titanium(3 * number));

	return arr;
}
vecofitems storageModule(int number) {
	vecofitems arr;
	item self = { '2', "Storage module", number };

	arr.push_back(self);
	insertvector(arr, lithium(1 * number));
	insertvector(arr, titanium(3 * number));

	return arr;
}
vecofitems titaniumIngot(int number) {
	vecofitems arr;
	item self = { '2', "Titanium ingot", number };

	arr.push_back(self);
	insertvector(arr, titanium(10 * number));

	return arr;
}
vecofitems vortexTorpedo(int number) {
	vecofitems arr;
	item self = { '2', "Vortex torpedo", number };

	arr.push_back(self);
	insertvector(arr, magnetite(1 * number));
	insertvector(arr, titanium(1 * number));

	return arr;
}
vecofitems wallLocker(int number) {
	vecofitems arr;
	item self = { '2', "Wall locker", number };

	arr.push_back(self);
	insertvector(arr, titanium(2 * number));

	return arr;
}
vecofitems waterproofLocker(int number) {
	vecofitems arr;
	item self = { '2', "Waterproof locker", number };

	arr.push_back(self);
	insertvector(arr, titanium(4 * number));

	return arr;
}
vecofitems wiringKit(int number) {
	vecofitems arr;
	item self = { '2', "Wiring kit", number };

	arr.push_back(self);
	insertvector(arr, silverOre(2 * number));

	return arr;
}
