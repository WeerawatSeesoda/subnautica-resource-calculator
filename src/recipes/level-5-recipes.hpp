#pragma once
#include "level-4-recipes.hpp"

vecofitems cyclops(int quantity) {
	vecofitems arr;
	item self = { '5', "Cyclops", quantity };

	arr.push_back(self);
	insertvector(arr, advancedWiringKit(1 * quantity));
	insertvector(arr, enameledGlass(3 * quantity));
	insertvector(arr, lead(3 * quantity));
	insertvector(arr, lubricant(1 * quantity));
	insertvector(arr, plasteelIngot(3 * quantity));

	return arr;
}
vecofitems cyclopsShieldGenerator(int quantity) {
	vecofitems arr;
	item self = { '5', "Cyclops shield generator", quantity };

	arr.push_back(self);
	insertvector(arr, advancedWiringKit(1 * quantity));
	insertvector(arr, polyaniline(1 * quantity));
	insertvector(arr, powerCell(1 * quantity));

	return arr;
}
vecofitems powerCellCharger(int quantity) {
	vecofitems arr;
	item self = { '5', "Power cell charger", quantity };

	arr.push_back(self);
	insertvector(arr, advancedWiringKit(1 * quantity));
	insertvector(arr, ruby(2 * quantity));
	insertvector(arr, titanium(2 * quantity));

	return arr;
}
vecofitems prawnSuitGrapplingArm(int quantity) {
	vecofitems arr;
	item self = { '5', "Prawn suit grappling arm", quantity };

	arr.push_back(self);
	insertvector(arr, advancedWiringKit(1 * quantity));
	insertvector(arr, benzene(1 * quantity));
	insertvector(arr, lithium(1 * quantity));
	insertvector(arr, titanium(5 * quantity));

	return arr;
}
vecofitems seamothDepthModuleMK3(int quantity) {
	vecofitems arr;
	item self = { '5', "Seamoth depth module MK3", quantity };

	arr.push_back(self);
	insertvector(arr, seamothDepthModuleMK2(1 * quantity));

	insertvector(arr, plasteelIngot(1 * quantity));
	insertvector(arr, ruby(3 * quantity));

	return arr;
}
vecofitems seamothSolarCharger(int quantity) {
	vecofitems arr;
	item self = { '5', "Seamoth solar charger", quantity };

	arr.push_back(self);
	insertvector(arr, advancedWiringKit(1 * quantity));
	insertvector(arr, enameledGlass(1 * quantity));

	return arr;
}
