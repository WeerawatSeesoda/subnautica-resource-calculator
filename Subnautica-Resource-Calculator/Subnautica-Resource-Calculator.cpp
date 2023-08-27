#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

const int stringLenght = 256;

struct item
{
	char itemName[stringLenght];
	int itemNumber;
};

// int  = 0;

//Primary
int acidMushroom = 0;
int copperOre = 0;
int creepvineSeedCluster = 0;
int crystallineSulfur = 0;
int deepShroom = 0;
int diamond = 0;
int gelSack = 0;
int gold = 0;
int lead = 0;
int lithium = 0;
int quartz = 0;
int ruby = 0;
int saltDeposit = 0;
int silverOre = 0;
int stalkerTooth = 0;
int tableCoralSample = 0;
int titanium = 0;

//Secondary
int aerogel = 0;
int battery = 0;
int copperWire = 0;
int glass = 0;
int hydrochloricAcid = 0;
int lubricant = 0;
int siliconeRubber = 0;
int titaniumIngot = 0;
int wallLocker = 0;
int wiringKit = 0;

//Tertiary
int batterryCharger = 0;
int computerChip = 0;
int cyclopsDepthModuleMK1 = 0;
int cyclopsFireSuppressionSystem = 0;
int enameledGlass = 0;
int moonpool = 0;
int plasteelIngot = 0;
int polyaniline = 0;
int powerCell = 0;
int waterFiltrationMachine = 0;

//Quaternary
int advancedWiringKit = 0;
int prawnSuit = 0;
int neptuneLaunchPlatform = 0;
int seamoth = 0;
int vehicleUpgradeConsole = 0;

//Quinary
int cyclops = 0;
int cyclopsShieldGenerator = 0;
int powerCellCharger = 0;

item subnItem[500];

void nameSetting() {
	/*
	strcpy_s(subnItem[].itemName, sizeof subnItem->itemName, "");
	*/

	//pri
	strcpy_s(subnItem[2].itemName, sizeof subnItem->itemName, "Acid muchroom");
	strcpy_s(subnItem[3].itemName, sizeof subnItem->itemName, "Copper ore");
	strcpy_s(subnItem[4].itemName, sizeof subnItem->itemName, "Creepvine seed cluster");
	strcpy_s(subnItem[5].itemName, sizeof subnItem->itemName, "Diamond");
	strcpy_s(subnItem[6].itemName, sizeof subnItem->itemName, "Gel sack");
	strcpy_s(subnItem[7].itemName, sizeof subnItem->itemName, "Gold");
	strcpy_s(subnItem[8].itemName, sizeof subnItem->itemName, "Lead");
	strcpy_s(subnItem[9].itemName, sizeof subnItem->itemName, "Lithium");
	strcpy_s(subnItem[10].itemName, sizeof subnItem->itemName, "Quartz");
	strcpy_s(subnItem[11].itemName, sizeof subnItem->itemName, "Ruby");
	strcpy_s(subnItem[12].itemName, sizeof subnItem->itemName, "Silver ore");
	strcpy_s(subnItem[13].itemName, sizeof subnItem->itemName, "Stalker tooth");
	strcpy_s(subnItem[14].itemName, sizeof subnItem->itemName, "Table coral sample");
	strcpy_s(subnItem[15].itemName, sizeof subnItem->itemName, "Titanium");
	strcpy_s(subnItem[16].itemName, sizeof subnItem->itemName, "Crystalline sulfur");
	strcpy_s(subnItem[17].itemName, sizeof subnItem->itemName, "Deep shroom");
	strcpy_s(subnItem[18].itemName, sizeof subnItem->itemName, "Salt deposit");

	//sec
	strcpy_s(subnItem[100].itemName, sizeof subnItem->itemName, "Aerogel");
	strcpy_s(subnItem[101].itemName, sizeof subnItem->itemName, "Battery");
	strcpy_s(subnItem[102].itemName, sizeof subnItem->itemName, "Copper wire");
	strcpy_s(subnItem[103].itemName, sizeof subnItem->itemName, "Glass");
	strcpy_s(subnItem[104].itemName, sizeof subnItem->itemName, "Lubricant");
	strcpy_s(subnItem[105].itemName, sizeof subnItem->itemName, "Silicone rubber");
	strcpy_s(subnItem[106].itemName, sizeof subnItem->itemName, "Titanium ingot");
	strcpy_s(subnItem[107].itemName, sizeof subnItem->itemName, "Wiring kit");
	strcpy_s(subnItem[108].itemName, sizeof subnItem->itemName, "Wall locker");
	strcpy_s(subnItem[109].itemName, sizeof subnItem->itemName, "Hydrochloric acid");

	//ter
	strcpy_s(subnItem[200].itemName, sizeof subnItem->itemName, "Computer chip");
	strcpy_s(subnItem[201].itemName, sizeof subnItem->itemName, "Enameled glass");
	strcpy_s(subnItem[202].itemName, sizeof subnItem->itemName, "Plasteel ingot");
	strcpy_s(subnItem[203].itemName, sizeof subnItem->itemName, "Battery charger");
	strcpy_s(subnItem[204].itemName, sizeof subnItem->itemName, "Water filtration machine");
	strcpy_s(subnItem[205].itemName, sizeof subnItem->itemName, "Moonpool");
	strcpy_s(subnItem[206].itemName, sizeof subnItem->itemName, "Power cell");
	strcpy_s(subnItem[207].itemName, sizeof subnItem->itemName, "Cyclops depth module MK1");
	strcpy_s(subnItem[208].itemName, sizeof subnItem->itemName, "Cyclops fire suppression system");
	strcpy_s(subnItem[209].itemName, sizeof subnItem->itemName, "Polyaniline");

	//qua
	strcpy_s(subnItem[300].itemName, sizeof subnItem->itemName, "Advanced wiring kit");
	strcpy_s(subnItem[301].itemName, sizeof subnItem->itemName, "PRAWN suit");
	strcpy_s(subnItem[302].itemName, sizeof subnItem->itemName, "Seamoth");
	strcpy_s(subnItem[303].itemName, sizeof subnItem->itemName, "Vehicle upgrade console");

	//qui
	strcpy_s(subnItem[400].itemName, sizeof subnItem->itemName, "Cyclops");
	strcpy_s(subnItem[401].itemName, sizeof subnItem->itemName, "Power cell charger");
	strcpy_s(subnItem[402].itemName, sizeof subnItem->itemName, "Cyclops shield generator");
}

void variableSetting()
{
	for (int i = 2; i < 500; i++)
	{
		/*
		if (strcmp(subnItem[i].itemName, "") == 0)
		{
		 = i;
		}
		*/

		//primary
		if (strcmp(subnItem[i].itemName, "Acid mushroom") == 0)
		{
			acidMushroom = i;
		}
		if (strcmp(subnItem[i].itemName, "Copper ore") == 0)
		{
			copperOre = i;
		}
		if (strcmp(subnItem[i].itemName, "Creepvine seed cluster") == 0)
		{
			creepvineSeedCluster = i;
		}
		if (strcmp(subnItem[i].itemName, "Crystalline sulfur") == 0)
		{
			crystallineSulfur = i;
		}
		if (strcmp(subnItem[i].itemName, "Deep shroom") == 0)
		{
			deepShroom = i;
		}
		if (strcmp(subnItem[i].itemName, "Diamond") == 0)
		{
			diamond = i;
		}
		if (strcmp(subnItem[i].itemName, "Gel sack") == 0)
		{
			gelSack = i;
		}
		if (strcmp(subnItem[i].itemName, "Gold") == 0)
		{
			gold = i;
		}
		if (strcmp(subnItem[i].itemName, "Lead") == 0)
		{
			lead = i;
		}
		if (strcmp(subnItem[i].itemName, "Lithium") == 0)
		{
			lithium = i;
		}
		if (strcmp(subnItem[i].itemName, "Quartz") == 0)
		{
			quartz = i;
		}
		if (strcmp(subnItem[i].itemName, "Ruby") == 0)
		{
			ruby = i;
		}
		if (strcmp(subnItem[i].itemName, "Salt deposit") == 0)
		{
			saltDeposit = i;
		}
		if (strcmp(subnItem[i].itemName, "Silver ore") == 0)
		{
			silverOre = i;
		}
		if (strcmp(subnItem[i].itemName, "Stalker tooth") == 0)
		{
			stalkerTooth = i;
		}
		if (strcmp(subnItem[i].itemName, "Table coral sample") == 0)
		{
			tableCoralSample = i;
		}
		if (strcmp(subnItem[i].itemName, "Titanium") == 0)
		{
			titanium = i;
		}

		//secondary
		if (strcmp(subnItem[i].itemName, "Aerogel") == 0)
		{
			aerogel = i;
		}
		if (strcmp(subnItem[i].itemName, "Battery") == 0)
		{
			battery = i;
		}
		if (strcmp(subnItem[i].itemName, "Copper wire") == 0)
		{
			copperWire = i;
		}
		if (strcmp(subnItem[i].itemName, "Glass") == 0)
		{
			glass = i;
		}
		if (strcmp(subnItem[i].itemName, "Hydrochloric acid") == 0)
		{
			hydrochloricAcid= i;
		}
		if (strcmp(subnItem[i].itemName, "Lubricant") == 0)
		{
			lubricant = i;
		}
		if (strcmp(subnItem[i].itemName, "Silicone rubber") == 0)
		{
			siliconeRubber = i;
		}
		if (strcmp(subnItem[i].itemName, "Titanium ingot") == 0)
		{
			titaniumIngot = i;
		}
		if (strcmp(subnItem[i].itemName, "Wall locker") == 0)
		{
			wallLocker = i;
		}
		if (strcmp(subnItem[i].itemName, "Wiring kit") == 0)
		{
			wiringKit = i;
		}

		//tertiary
		if (strcmp(subnItem[i].itemName, "Batterry charger") == 0)
		{
			batterryCharger = i;
		}
		if (strcmp(subnItem[i].itemName, "Computer chip") == 0)
		{
			computerChip = i;
		}
		if (strcmp(subnItem[i].itemName, "Cyclops depth module MK1") == 0)
		{
			cyclopsDepthModuleMK1 = i;
		}
		if (strcmp(subnItem[i].itemName, "Cyclops fire suppression system") == 0)
		{
			cyclopsFireSuppressionSystem = i;
		}
		if (strcmp(subnItem[i].itemName, "Enameled glass") == 0)
		{
			enameledGlass = i;
		}
		if (strcmp(subnItem[i].itemName, "Moonpool") == 0)
		{
			moonpool = i;
		}
		if (strcmp(subnItem[i].itemName, "Plasteel ingot") == 0)
		{
			plasteelIngot = i;
		}
		if (strcmp(subnItem[i].itemName, "Polyaniline") == 0)
		{
			polyaniline = i;
		}
		if (strcmp(subnItem[i].itemName, "Power cell") == 0)
		{
			powerCell = i;
		}
		if (strcmp(subnItem[i].itemName, "Water filtration machine") == 0)
		{
			waterFiltrationMachine = i;
		}

		//quaternary
		if (strcmp(subnItem[i].itemName, "Advanced wiring kit") == 0)
		{
			advancedWiringKit = i;
		}
		if (strcmp(subnItem[i].itemName, "PRAWN suit") == 0)
		{
			prawnSuit = i;
		}
		if (strcmp(subnItem[i].itemName, "Neptune Launch Platform") == 0)
		{
			neptuneLaunchPlatform = i;
		}
		if (strcmp(subnItem[i].itemName, "Seamoth") == 0)
		{
			seamoth = i;
		}
		if (strcmp(subnItem[i].itemName, "Vehicle upgrade console") == 0)
		{
			vehicleUpgradeConsole = i;
		}

		//quinary
		if (strcmp(subnItem[i].itemName, "Cyclops") == 0)
		{
			cyclops = i;
		}
		if (strcmp(subnItem[i].itemName, "Cyclops shield generator") == 0)
		{
			cyclopsShieldGenerator = i;
		}
		if (strcmp(subnItem[i].itemName, "Power cell charger") == 0)
		{
			powerCellCharger = i;
		}
	}
}

int nameCheck(char inputName[256])
{
	////spell checking and show the error or return the number of the struct object
	if (inputName[0] == NULL)
	{
		return false;
	}
	else
	{
		char buffer1[stringLenght];
		char buffer2[stringLenght];

		strcpy_s(buffer1, stringLenght, inputName);
		for (int i = 0; i < strlen(buffer1); i++)
		{
			buffer1[i] = tolower(buffer1[i]);
		}
		for (int itemID = 2; itemID < 500; itemID++)
		{
			strcpy_s(buffer2, stringLenght, subnItem[itemID].itemName);
			for (int i = 0; i < strlen(buffer2); i++)
			{
				buffer2[i] = tolower(buffer2[i]);
			}
			if (strcmp(buffer1, buffer2) == 0)
			{
				return itemID;
			}
		}
	}
	return false;
}

item input()
{
	item input;
	int itemID;
	bool isCorrectName = false;

	input.itemNumber = 0;
	printf("Please enter the item name or type \"done\" to calculate or type \"exit\" to close program\n");

	do {
		printf("Enter item name: ");
		fgets(input.itemName, sizeof input.itemName, stdin);
		input.itemName[strcspn(input.itemName, "\n")] = 0;
		if (strcmp(input.itemName, "exit") == 0)
		{
			return input;
		}
		else if (strcmp(input.itemName, "done") == 0)
		{
			return input;
		}
		else
		{
			isCorrectName = itemID = nameCheck(input.itemName);
			if (isCorrectName == false)
			{
				printf("Cannot find the item, Try again\n");
			}
			else
			{
				break;
			}
		}
	} while (isCorrectName == false);

	do {
		printf("How many item: ");
		scanf_s("%d", &input.itemNumber);

		while (getchar() != '\n');

		if (input.itemNumber < 1)
		{
			printf("The number must larger than 0, Try again\n");
		}
		else
		{
			subnItem[itemID].itemNumber = input.itemNumber;
			break;
		}
	} while (input.itemNumber < 1);
	return input;
}

void calculating()
{
	/*
	if (subnItem[].itemNumber > 0)
	{
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	}
	*/

	//quinary
	if (subnItem[cyclops].itemNumber > 0)
	{
		subnItem[advancedWiringKit].itemNumber += 1 * subnItem[cyclops].itemNumber;
		subnItem[enameledGlass].itemNumber += 3 * subnItem[cyclops].itemNumber;
		subnItem[lead].itemNumber += 3 * subnItem[cyclops].itemNumber;
		subnItem[lubricant].itemNumber += 1 * subnItem[cyclops].itemNumber;
		subnItem[plasteelIngot].itemNumber += 3 * subnItem[cyclops].itemNumber;
	}

	if (subnItem[cyclopsShieldGenerator].itemNumber > 0)
	{
		subnItem[advancedWiringKit].itemNumber += 1 * subnItem[cyclopsShieldGenerator].itemNumber;
		subnItem[polyaniline].itemNumber += 1 * subnItem[cyclopsShieldGenerator].itemNumber;
		subnItem[powerCell].itemNumber += 1 * subnItem[cyclopsShieldGenerator].itemNumber;
	}

	if (subnItem[powerCellCharger].itemNumber > 0)
	{
		subnItem[advancedWiringKit].itemNumber += 1 * subnItem[powerCellCharger].itemNumber;
		subnItem[ruby].itemNumber += 2 * subnItem[powerCellCharger].itemNumber;
		subnItem[titanium].itemNumber += 2 * subnItem[powerCellCharger].itemNumber;
	}

	//quaternary
	if (subnItem[advancedWiringKit].itemNumber > 0)
	{
		subnItem[computerChip].itemNumber += 1 * subnItem[advancedWiringKit].itemNumber;
		subnItem[gold].itemNumber += 2 * subnItem[advancedWiringKit].itemNumber;
		subnItem[wiringKit].itemNumber += 1 * subnItem[advancedWiringKit].itemNumber;
	}

	if (subnItem[neptuneLaunchPlatform].itemNumber > 0)
	{
		subnItem[computerChip].itemNumber += 1 * subnItem[neptuneLaunchPlatform].itemNumber;
		subnItem[lead].itemNumber += 4 * subnItem[neptuneLaunchPlatform].itemNumber;
		subnItem[titaniumIngot].itemNumber += 2 * subnItem[neptuneLaunchPlatform].itemNumber;
	}

	if (subnItem[prawnSuit].itemNumber > 0)
	{
		subnItem[aerogel].itemNumber += 2 * subnItem[prawnSuit].itemNumber;
		subnItem[diamond].itemNumber += 2 * subnItem[prawnSuit].itemNumber;
		subnItem[enameledGlass].itemNumber += 1 * subnItem[prawnSuit].itemNumber;
		subnItem[lead].itemNumber += 2 * subnItem[prawnSuit].itemNumber;
		subnItem[plasteelIngot].itemNumber += 2 * subnItem[prawnSuit].itemNumber;
	}

	if (subnItem[seamoth].itemNumber > 0)
	{
		subnItem[glass].itemNumber += 2 * subnItem[seamoth].itemNumber;
		subnItem[lead].itemNumber += 1 * subnItem[seamoth].itemNumber;
		subnItem[lubricant].itemNumber += 1 * subnItem[seamoth].itemNumber;
		subnItem[powerCell].itemNumber += 1 * subnItem[seamoth].itemNumber;
		subnItem[titaniumIngot].itemNumber += 1 * subnItem[seamoth].itemNumber;
	}

	if (subnItem[vehicleUpgradeConsole].itemNumber > 0)
	{
		subnItem[computerChip].itemNumber += 1 * subnItem[vehicleUpgradeConsole].itemNumber;
		subnItem[copperWire].itemNumber += 1 * subnItem[vehicleUpgradeConsole].itemNumber;
		subnItem[titanium].itemNumber += 3 * subnItem[vehicleUpgradeConsole].itemNumber;
	}

	//tertiary
	if (subnItem[batterryCharger].itemNumber > 0)
	{
		subnItem[copperWire].itemNumber += 1 * subnItem[batterryCharger].itemNumber;
		subnItem[titanium].itemNumber += 1 * subnItem[batterryCharger].itemNumber;
		subnItem[wiringKit].itemNumber += 1 * subnItem[batterryCharger].itemNumber;
	}

	if (subnItem[computerChip].itemNumber > 0)
	{
		subnItem[copperWire].itemNumber += 1 * subnItem[computerChip].itemNumber;
		subnItem[gold].itemNumber += 2 * subnItem[computerChip].itemNumber;
		subnItem[tableCoralSample].itemNumber += 2 * subnItem[computerChip].itemNumber;
	}

	if (subnItem[cyclopsDepthModuleMK1].itemNumber > 0)
	{
		subnItem[plasteelIngot].itemNumber += 1 * subnItem[cyclopsDepthModuleMK1].itemNumber;
		subnItem[ruby].itemNumber += 3 * subnItem[cyclopsDepthModuleMK1].itemNumber;
	}

	if (subnItem[cyclopsFireSuppressionSystem].itemNumber > 0)
	{
		subnItem[aerogel].itemNumber += 2 * subnItem[cyclopsFireSuppressionSystem].itemNumber;
		subnItem[crystallineSulfur].itemNumber += 2 * subnItem[cyclopsFireSuppressionSystem].itemNumber;
	}

	if (subnItem[enameledGlass].itemNumber > 0)
	{
		subnItem[glass].itemNumber += 1 * subnItem[enameledGlass].itemNumber;
		subnItem[stalkerTooth].itemNumber += 1 * subnItem[enameledGlass].itemNumber;
	}

	if (subnItem[moonpool].itemNumber > 0)
	{
		subnItem[lead].itemNumber += 2 * subnItem[moonpool].itemNumber;
		subnItem[lubricant].itemNumber += 1 * subnItem[moonpool].itemNumber;
		subnItem[titaniumIngot].itemNumber += 2 * subnItem[moonpool].itemNumber;
	}

	if (subnItem[plasteelIngot].itemNumber > 0)
	{
		subnItem[lithium].itemNumber += 2 * subnItem[plasteelIngot].itemNumber;
		subnItem[titaniumIngot].itemNumber += 1 * subnItem[plasteelIngot].itemNumber;
	}

	if (subnItem[polyaniline].itemNumber > 0)
	{
		subnItem[gold].itemNumber += 1 * subnItem[polyaniline].itemNumber;
		subnItem[hydrochloricAcid].itemNumber += 1 * subnItem[polyaniline].itemNumber;
	}

	if (subnItem[powerCell].itemNumber > 0)
	{
		subnItem[battery].itemNumber += 2 * subnItem[powerCell].itemNumber;
		subnItem[siliconeRubber].itemNumber += 1 * subnItem[powerCell].itemNumber;
	}

	if (subnItem[waterFiltrationMachine].itemNumber > 0)
	{
		subnItem[aerogel].itemNumber += 1 * subnItem[waterFiltrationMachine].itemNumber;
		subnItem[copperWire].itemNumber += 1 * subnItem[waterFiltrationMachine].itemNumber;
		subnItem[titanium].itemNumber += 3 * subnItem[waterFiltrationMachine].itemNumber;
	}

	//secondary
	if (subnItem[aerogel].itemNumber > 0)
	{
		subnItem[gelSack].itemNumber += 1 * subnItem[aerogel].itemNumber;
		subnItem[ruby].itemNumber += 1 * subnItem[aerogel].itemNumber;
	}

	if (subnItem[battery].itemNumber > 0)
	{
		subnItem[acidMushroom].itemNumber += 2 * subnItem[battery].itemNumber;
		subnItem[copperOre].itemNumber += 1 * subnItem[battery].itemNumber;
	}

	if (subnItem[copperWire].itemNumber > 0)
	{
		subnItem[copperOre].itemNumber += 2 * subnItem[copperWire].itemNumber;
	}

	if (subnItem[glass].itemNumber > 0)
	{
		subnItem[quartz].itemNumber += 2 * subnItem[glass].itemNumber;
	}

	if (subnItem[hydrochloricAcid].itemNumber > 0)
	{
		subnItem[deepShroom].itemNumber += 3 * subnItem[hydrochloricAcid].itemNumber;
		subnItem[saltDeposit].itemNumber += 1 * subnItem[hydrochloricAcid].itemNumber;
	}

	if (subnItem[lubricant].itemNumber > 0)
	{
		subnItem[creepvineSeedCluster].itemNumber += 1 * subnItem[lubricant].itemNumber;
	}

	if (subnItem[siliconeRubber].itemNumber > 0)
	{
		subnItem[creepvineSeedCluster].itemNumber += 1 * subnItem[siliconeRubber].itemNumber;
	}

	if (subnItem[titaniumIngot].itemNumber > 0)
	{
		subnItem[titanium].itemNumber += 10 * subnItem[titaniumIngot].itemNumber;
	}

	if (subnItem[wallLocker].itemNumber > 0)
	{
		subnItem[titanium].itemNumber += 2 * subnItem[wallLocker].itemNumber;
	}

	if (subnItem[wiringKit].itemNumber > 0)
	{
		subnItem[silverOre].itemNumber += 2 * subnItem[wiringKit].itemNumber;
	}
}

void show()
{
	printf("\nPrimary items\n");
	for (int i = 2; i < 100; i++)
	{
		if (subnItem[i].itemNumber > 0)
		{
			printf("%s = %d\n", subnItem[i].itemName, subnItem[i].itemNumber);
		}
	}

	printf("\nSecondary items\n");
	for (int i = 100; i < 200; i++)
	{
		if (subnItem[i].itemNumber > 0)
		{
			printf("%s = %d\n", subnItem[i].itemName, subnItem[i].itemNumber);
		}
	}

	printf("\nTertiary items\n");
	for (int i = 200; i < 300; i++)
	{
		if (subnItem[i].itemNumber > 0)
		{
			printf("%s = %d\n", subnItem[i].itemName, subnItem[i].itemNumber);
		}
	}
	printf("\nQuatenary\n");
	for (int i = 300; i < 400; i++)
	{
		if (subnItem[i].itemNumber > 0)
		{
			printf("%s = %d\n", subnItem[i].itemName, subnItem[i].itemNumber);
		}
	}
	printf("\nQuinary\n");
	for (int i = 400; i < 500; i++)
	{
		if (subnItem[i].itemNumber > 0)
		{
			printf("%s = %d\n", subnItem[i].itemName, subnItem[i].itemNumber);
		}
	}
}

int main()
{
	item inputItem;

	nameSetting();
	variableSetting();
	do
	{
		inputItem = input();
		if (strcmp(inputItem.itemName, "exit") == 0)
		{
			return 0;
		}
		else if (strcmp(inputItem.itemName, "done") == 0)
		{
			break;
		}
		else
		{
			calculating();
		}
	} while (strcmp(inputItem.itemName, "done") != 0);
	show();

	printf("\nPress any key to close\n");
	_getch();
	return 0;
}