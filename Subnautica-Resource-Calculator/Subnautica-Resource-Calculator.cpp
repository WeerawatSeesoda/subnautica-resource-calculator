#include <stdio.h>
#include <conio.h>
#include <string.h>

struct item
{
	char itemName[256];
	int itemNumber;
};

//Primary
int acidMushroom = 0;
int copperOre = 0;
int creepvineSeedCluster = 0;
int diamond = 0;
int gelSack = 0;
int gold = 0;
int lead = 0;
int lithium = 0;
int quartz = 0;
int ruby = 0;
int silverOre = 0;
int stalkerTooth = 0;
int tableCoralSample = 0;
int titanium = 0;

//Secondary
int aerogel = 0;
int battery = 0;
int copperWire = 0;
int glass = 0;
int lubricant = 0;
int siliconeRubber = 0;
int titaniumIngot = 0;
int wiringKit = 0;

//Tertiary
int computerChip = 0;
int enameledGlass = 0;
int plasteelIngot = 0;
int powerCell = 0;

//Quaternary
int advancedWiringKit = 0;

//Quinary
item subnItem[500];

void nameSetting() {
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

	strcpy_s(subnItem[199].itemName, sizeof subnItem->itemName, "wall locker");

	//ter
	strcpy_s(subnItem[200].itemName, sizeof subnItem->itemName, "Computer chip");
	strcpy_s(subnItem[201].itemName, sizeof subnItem->itemName, "Enameled glass");
	strcpy_s(subnItem[202].itemName, sizeof subnItem->itemName, "Plasteel ingot");
	strcpy_s(subnItem[203].itemName, sizeof subnItem->itemName, "Battery charger");
	strcpy_s(subnItem[204].itemName, sizeof subnItem->itemName, "Water filtration machine");
	strcpy_s(subnItem[205].itemName, sizeof subnItem->itemName, "Moonpool");

	strcpy_s(subnItem[297].itemName, sizeof subnItem->itemName, "moonpool");
	strcpy_s(subnItem[298].itemName, sizeof subnItem->itemName, "battery charger");
	strcpy_s(subnItem[299].itemName, sizeof subnItem->itemName, "water filtration machine");

	//qua
	strcpy_s(subnItem[300].itemName, sizeof subnItem->itemName, "Advanced wiring kit");
	strcpy_s(subnItem[301].itemName, sizeof subnItem->itemName, "PRAWN suit");
	strcpy_s(subnItem[302].itemName, sizeof subnItem->itemName, "Seamoth");
	strcpy_s(subnItem[303].itemName, sizeof subnItem->itemName, "Vehicle upgrade console");

	strcpy_s(subnItem[396].itemName, sizeof subnItem->itemName, "vehicle upgrade console");
	strcpy_s(subnItem[397].itemName, sizeof subnItem->itemName, "seamoth");
	strcpy_s(subnItem[398].itemName, sizeof subnItem->itemName, "Prawn suit");
	strcpy_s(subnItem[399].itemName, sizeof subnItem->itemName, "prawn suit");

	//qui
	strcpy_s(subnItem[400].itemName, sizeof subnItem->itemName, "Cyclops");
	strcpy_s(subnItem[401].itemName, sizeof subnItem->itemName, "Power cell charger");

	strcpy_s(subnItem[498].itemName, sizeof subnItem->itemName, "power cell charger");
	strcpy_s(subnItem[499].itemName, sizeof subnItem->itemName, "cyclops");
}

void variableSetting()
{
	for (int i = 2; i < 500; i++)
	{
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
		if (strcmp(subnItem[i].itemName, "Wiring kit") == 0)
		{
			wiringKit = i;
		}

		//tertiary
		if (strcmp(subnItem[i].itemName, "Computer chip") == 0)
		{
			computerChip = i;
		}
		if (strcmp(subnItem[i].itemName, "Enameled glass") == 0)
		{
			enameledGlass = i;
		}
		if (strcmp(subnItem[i].itemName, "Plasteel ingot") == 0)
		{
			plasteelIngot = i;
		}
		if (strcmp(subnItem[i].itemName, "Power cell") == 0)
		{
			powerCell = i;
		}

		//quaternary
		if (strcmp(subnItem[i].itemName, "Advanced wiring kit") == 0)
		{
			advancedWiringKit = i;
		}
	}
}

char nameCheck(char inputName[256])
{
	////spell checking and show the error or return the number of the struct object
	if (inputName[0] == NULL)
	{
		return false;
	}
	for (int i = 2; i < 500; i++)
	{
		if (strcmp(subnItem[i].itemName, inputName) == 0)
		{
			return i;
		}
	}
	return false;
}

item input()
{
	item input;
	bool isCorrectName;

	input.itemNumber = 0;
	printf("Please enter the item name or type \"done\" to calculate or type \"exit\" to close program\n");
	do {
		printf("Enter item name: ");
		fgets(input.itemName, sizeof input.itemName, stdin);
		input.itemName[strcspn(input.itemName, "\n")] = 0;
		isCorrectName = nameCheck(input.itemName);
		if (strcmp(input.itemName, "exit") == 0)
		{
			return input;
		}
		else if (strcmp(input.itemName, "done") == 0)
		{
			return input;
		}
		if (isCorrectName == false)
		{
			printf("Cannot find the item, Try again\n");
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
	} while (input.itemNumber < 1);\
	return input;
}

void calculating(char inputName[256])
{
	/*
	if (strcmp(inputName, "") == 0)
	{
		subnItem[].itemNumber += ;
		subnItem[].itemNumber += ;
		subnItem[].itemNumber += ;
	}

	if (subnItem[].itemNumber > 0)
	{
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	subnItem[].itemNumber +=  * subnItem[].itemNumber;
	}
	*/

	//quinary
	if (strcmp(inputName, "Cyclops") == 0 || strcmp(inputName, "cyclops") == 0)
	{
		subnItem[advancedWiringKit].itemNumber += 1;
		subnItem[enameledGlass].itemNumber += 3;
		subnItem[lead].itemNumber += 3;
		subnItem[lubricant].itemNumber += 1;
		subnItem[plasteelIngot].itemNumber += 3;
	}

	if (strcmp(inputName, "Power cell charger") == 0 || strcmp(inputName, "power cell charger") == 0)
	{
		subnItem[advancedWiringKit].itemNumber += 1;
		subnItem[ruby].itemNumber += 2;
		subnItem[titanium].itemNumber += 2;
	}

	//quaternary
	if (strcmp(inputName, "Neptune Launch Platform") == 0)
	{
		subnItem[computerChip].itemNumber += 1;
		subnItem[lead].itemNumber += 4;
		subnItem[titaniumIngot].itemNumber += 2;
	}

	if (strcmp(inputName, "PRAWN suit") == 0 || strcmp(inputName, "Prawn suit") == 0 || strcmp(inputName, "prawn suit") == 0)
	{
		subnItem[aerogel].itemNumber += 2;
		subnItem[diamond].itemNumber += 2;
		subnItem[enameledGlass].itemNumber += 1;
		subnItem[lead].itemNumber += 2;
		subnItem[plasteelIngot].itemNumber += 2;
	}

	if (strcmp(inputName, "Seamoth") == 0)
	{
		subnItem[glass].itemNumber += 2;
		subnItem[lead].itemNumber += 1;
		subnItem[lubricant].itemNumber += 1;
		subnItem[powerCell].itemNumber += 1;
		subnItem[titaniumIngot].itemNumber += 1;
	}

	if (strcmp(inputName, "Vehicle upgrade console") == 0 || strcmp(inputName, "vehicle upgrade console") == 0)
	{
		subnItem[computerChip].itemNumber += 1;
		subnItem[copperWire].itemNumber += 1;
		subnItem[titanium].itemNumber += 3;
	}

	if (subnItem[advancedWiringKit].itemNumber > 0)
	{
		subnItem[computerChip].itemNumber += 1 * subnItem[advancedWiringKit].itemNumber;
		subnItem[gold].itemNumber += 2 * subnItem[advancedWiringKit].itemNumber;
		subnItem[wiringKit].itemNumber += 1 * subnItem[advancedWiringKit].itemNumber;
	}

	//tertiary
	if (strcmp(inputName, "Baterry charger") == 0 || strcmp(inputName, "baterry charger") == 0)
	{
		subnItem[copperWire].itemNumber += 1;
		subnItem[titanium].itemNumber += 1;
		subnItem[wiringKit].itemNumber += 1;
	}

	if (strcmp(inputName, "Moonpool") == 0 || strcmp(inputName, "moonpool") == 0)
	{
		subnItem[lead].itemNumber += 2;
		subnItem[lubricant].itemNumber += 1;
		subnItem[titaniumIngot].itemNumber += 2;
	}

	if (strcmp(inputName, "Water filtration machine") == 0 || strcmp(inputName, "water filtration machine") == 0)
	{
		subnItem[aerogel].itemNumber += 1;
		subnItem[copperWire].itemNumber += 1;
		subnItem[titanium].itemNumber += 3;
	}

	if (subnItem[enameledGlass].itemNumber > 0)
	{
		subnItem[glass].itemNumber += 1 * subnItem[enameledGlass].itemNumber;
		subnItem[stalkerTooth].itemNumber += 1 * subnItem[enameledGlass].itemNumber;
	}

	if (subnItem[plasteelIngot].itemNumber > 0)
	{
		subnItem[lithium].itemNumber += 2 * subnItem[plasteelIngot].itemNumber;
		subnItem[titaniumIngot].itemNumber += 1 * subnItem[plasteelIngot].itemNumber;
	}

	if (subnItem[computerChip].itemNumber > 0)
	{
		subnItem[copperWire].itemNumber += 1 * subnItem[computerChip].itemNumber;
		subnItem[gold].itemNumber += 2 * subnItem[computerChip].itemNumber;
		subnItem[tableCoralSample].itemNumber += 2 * subnItem[computerChip].itemNumber;
	}

	//secondary
	if (strcmp(inputName, "Wall locker") == 0 || strcmp(inputName, "wall locker") == 0)
	{
		subnItem[titanium].itemNumber += 2;
	}

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
}

int main()
{
	item inputName;

	nameSetting();
	variableSetting();
	do
	{
		inputName = input();
		if (strcmp(inputName.itemName, "exit") == 0)
		{
			return 0;
		}
		calculating(inputName.itemName);
	} while (strcmp(inputName.itemName, "done") != 0);
	show();

	printf("\nPress any key to close\n");
	_getch();
	return 0;
}