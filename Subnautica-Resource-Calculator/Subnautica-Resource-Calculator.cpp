#include <stdio.h>
#include <stdlib.h>
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
int bufferNumber[500];

void clearBufferNumber()
{
	for (int i = 0; i < 500; i++)
	{
		bufferNumber[i] = 0;
	}
}

void nameSetting()
{
	FILE *fp;
	errno_t err;
	err = fopen_s(&fp, "./SubnItemNameLists.txt", "rt");

	if (err == 0)
	{
		char buffer[256];
		int num;

		while (!feof(fp))
		{
			fgets(buffer, sizeof buffer, fp);
			while (strcmp(buffer, "\n") != 0)
			{
				if (buffer[strcspn(buffer, "//")] != 0)
				{
					buffer[strcspn(buffer, "//")] = 0;
					num = atoi(buffer);
					break;
				}
				else
				{
					buffer[strcspn(buffer, "\n")] = 0;
					strcpy_s(subnItem[num].itemName, sizeof subnItem->itemName, buffer);
					num++;
					break;
				}
			}
		}
	}
	else
	{
		perror("Error");
	}
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
		for (unsigned int i = 0; i < strlen(buffer1); i++)
		{
			buffer1[i] = tolower(buffer1[i]);
		}
		for (int itemID = 2; itemID < 500; itemID++)
		{
			strcpy_s(buffer2, stringLenght, subnItem[itemID].itemName);
			for (unsigned int i = 0; i < strlen(buffer2); i++)
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
			clearBufferNumber();
			subnItem[itemID].itemNumber += bufferNumber[itemID] = input.itemNumber;
			break;
		}
	} while (input.itemNumber < 1);
	return input;
}

void calculating()
{
	/*
	if (bufferNumber[a].itemNumber > 0)
	{
	subnItem[b].itemNumber += bufferNumber[b] += x * bufferNumber[a].itemNumber;
	subnItem[c].itemNumber += bufferNumber[c] += y * bufferNumber[a].itemNumber;
	}
	*/

	//quinary
	if (bufferNumber[cyclops] > 0)
	{
		subnItem[advancedWiringKit].itemNumber += bufferNumber[advancedWiringKit] += 1 * bufferNumber[cyclops];
		subnItem[enameledGlass].itemNumber += bufferNumber[enameledGlass] += 3 * bufferNumber[cyclops];
		subnItem[lead].itemNumber += bufferNumber[lead] += 3 * bufferNumber[cyclops];
		subnItem[lubricant].itemNumber += bufferNumber[lubricant] += 1 * bufferNumber[cyclops];
		subnItem[plasteelIngot].itemNumber += bufferNumber[plasteelIngot] += 3 * bufferNumber[cyclops];
	}

	if (bufferNumber[cyclopsShieldGenerator] > 0)
	{
		subnItem[advancedWiringKit].itemNumber += bufferNumber[advancedWiringKit] += 1 * bufferNumber[cyclopsShieldGenerator];
		subnItem[polyaniline].itemNumber += bufferNumber[polyaniline] += 1 * bufferNumber[cyclopsShieldGenerator];
		subnItem[powerCell].itemNumber += bufferNumber[powerCell] += 1 * bufferNumber[cyclopsShieldGenerator];
	}

	if (bufferNumber[powerCellCharger] > 0)
	{
		subnItem[advancedWiringKit].itemNumber += bufferNumber[advancedWiringKit] += 1 * bufferNumber[powerCellCharger];
		subnItem[ruby].itemNumber += bufferNumber[ruby] += 2 * bufferNumber[powerCellCharger];
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 2 * bufferNumber[powerCellCharger];
	}

	//quaternary
	if (bufferNumber[advancedWiringKit] > 0)
	{
		subnItem[computerChip].itemNumber += bufferNumber[computerChip] += 1 * bufferNumber[advancedWiringKit];
		subnItem[gold].itemNumber += bufferNumber[gold] += 2 * bufferNumber[advancedWiringKit];
		subnItem[wiringKit].itemNumber += bufferNumber[wiringKit] += 1 * bufferNumber[advancedWiringKit];
	}

	if (bufferNumber[neptuneLaunchPlatform] > 0)
	{
		subnItem[computerChip].itemNumber += bufferNumber[computerChip] += 1 * bufferNumber[neptuneLaunchPlatform];
		subnItem[lead].itemNumber += bufferNumber[lead] += 4 * bufferNumber[neptuneLaunchPlatform];
		subnItem[titaniumIngot].itemNumber += bufferNumber[titaniumIngot] += 2 * bufferNumber[neptuneLaunchPlatform];
	}

	if (bufferNumber[prawnSuit] > 0)
	{
		subnItem[aerogel].itemNumber += bufferNumber[aerogel] += 2 * bufferNumber[prawnSuit];
		subnItem[diamond].itemNumber += bufferNumber[diamond] += 2 * bufferNumber[prawnSuit];
		subnItem[enameledGlass].itemNumber += bufferNumber[enameledGlass] += 1 * bufferNumber[prawnSuit];
		subnItem[lead].itemNumber += bufferNumber[lead] += 2 * bufferNumber[prawnSuit];
		subnItem[plasteelIngot].itemNumber += bufferNumber[plasteelIngot] += 2 * bufferNumber[prawnSuit];
	}

	if (bufferNumber[seamoth] > 0)
	{
		subnItem[glass].itemNumber += bufferNumber[glass] += 2 * bufferNumber[seamoth];
		subnItem[lead].itemNumber += bufferNumber[lead] += 1 * bufferNumber[seamoth];
		subnItem[lubricant].itemNumber += bufferNumber[lubricant] += 1 * bufferNumber[seamoth];
		subnItem[powerCell].itemNumber += bufferNumber[powerCell] += 1 * bufferNumber[seamoth];
		subnItem[titaniumIngot].itemNumber += bufferNumber[titaniumIngot] += 1 * bufferNumber[seamoth];
	}

	if (bufferNumber[vehicleUpgradeConsole] > 0)
	{
		subnItem[computerChip].itemNumber += bufferNumber[computerChip] += 1 * bufferNumber[vehicleUpgradeConsole];
		subnItem[copperWire].itemNumber += bufferNumber[copperWire] += 1 * bufferNumber[vehicleUpgradeConsole];
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 3 * bufferNumber[vehicleUpgradeConsole];
	}

	//tertiary
	if (bufferNumber[batterryCharger] > 0)
	{
		subnItem[copperWire].itemNumber += bufferNumber[copperWire] += 1 * bufferNumber[batterryCharger];
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 1 * bufferNumber[batterryCharger];
		subnItem[wiringKit].itemNumber += bufferNumber[wiringKit] += 1 * bufferNumber[batterryCharger];
	}

	if (bufferNumber[computerChip] > 0)
	{
		subnItem[copperWire].itemNumber += bufferNumber[copperWire] += 1 * bufferNumber[computerChip];
		subnItem[gold].itemNumber += bufferNumber[gold] += 2 * bufferNumber[computerChip];
		subnItem[tableCoralSample].itemNumber += bufferNumber[tableCoralSample] += 2 * bufferNumber[computerChip];
	}

	if (bufferNumber[cyclopsDepthModuleMK1] > 0)
	{
		subnItem[plasteelIngot].itemNumber += bufferNumber[plasteelIngot] += 1 * bufferNumber[cyclopsDepthModuleMK1];
		subnItem[ruby].itemNumber += bufferNumber[ruby] += 3 * bufferNumber[cyclopsDepthModuleMK1];
	}

	if (bufferNumber[cyclopsFireSuppressionSystem] > 0)
	{
		subnItem[aerogel].itemNumber += bufferNumber[aerogel] += 2 * bufferNumber[cyclopsFireSuppressionSystem];
		subnItem[crystallineSulfur].itemNumber += bufferNumber[crystallineSulfur] += 2 * bufferNumber[cyclopsFireSuppressionSystem];
	}

	if (bufferNumber[enameledGlass] > 0)
	{
		subnItem[glass].itemNumber += bufferNumber[glass] += 1 * bufferNumber[enameledGlass];
		subnItem[stalkerTooth].itemNumber += bufferNumber[stalkerTooth] += 1 * bufferNumber[enameledGlass];
	}

	if (bufferNumber[moonpool] > 0)
	{
		subnItem[lead].itemNumber += bufferNumber[lead] += 2 * bufferNumber[moonpool];
		subnItem[lubricant].itemNumber += bufferNumber[lubricant] += 1 * bufferNumber[moonpool];
		subnItem[titaniumIngot].itemNumber += bufferNumber[titaniumIngot] += 2 * bufferNumber[moonpool];
	}

	if (bufferNumber[plasteelIngot] > 0)
	{
		subnItem[lithium].itemNumber += bufferNumber[lithium] += 2 * bufferNumber[plasteelIngot];
		subnItem[titaniumIngot].itemNumber += bufferNumber[titaniumIngot] += 1 * bufferNumber[plasteelIngot];
	}

	if (bufferNumber[polyaniline] > 0)
	{
		subnItem[gold].itemNumber += bufferNumber[gold] += 1 * bufferNumber[polyaniline];
		subnItem[hydrochloricAcid].itemNumber += bufferNumber[hydrochloricAcid] += 1 * bufferNumber[polyaniline];
	}

	if (bufferNumber[powerCell] > 0)
	{
		subnItem[battery].itemNumber += bufferNumber[battery] += 2 * bufferNumber[powerCell];
		subnItem[siliconeRubber].itemNumber += bufferNumber[siliconeRubber] += 1 * bufferNumber[powerCell];
	}

	if (bufferNumber[waterFiltrationMachine] > 0)
	{
		subnItem[aerogel].itemNumber += bufferNumber[aerogel] += 1 * bufferNumber[waterFiltrationMachine];
		subnItem[copperWire].itemNumber += bufferNumber[copperWire] += 1 * bufferNumber[waterFiltrationMachine];
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 3 * bufferNumber[waterFiltrationMachine];
	}

	//secondary
	if (bufferNumber[aerogel] > 0)
	{
		subnItem[gelSack].itemNumber += bufferNumber[gelSack] += 1 * bufferNumber[aerogel];
		subnItem[ruby].itemNumber += bufferNumber[ruby] += 1 * bufferNumber[aerogel];
	}

	if (bufferNumber[battery] > 0)
	{
		subnItem[acidMushroom].itemNumber += bufferNumber[acidMushroom] += 2 * bufferNumber[battery];
		subnItem[copperOre].itemNumber += bufferNumber[copperOre] += 1 * bufferNumber[battery];
	}

	if (bufferNumber[copperWire] > 0)
	{
		subnItem[copperOre].itemNumber += bufferNumber[copperOre] += 2 * bufferNumber[copperWire];
	}

	if (bufferNumber[glass] > 0)
	{
		subnItem[quartz].itemNumber += bufferNumber[quartz] += 2 * bufferNumber[glass];
	}

	if (bufferNumber[hydrochloricAcid] > 0)
	{
		subnItem[deepShroom].itemNumber += bufferNumber[deepShroom] += 3 * bufferNumber[hydrochloricAcid];
		subnItem[saltDeposit].itemNumber += bufferNumber[saltDeposit] += 1 * bufferNumber[hydrochloricAcid];
	}

	if (bufferNumber[lubricant] > 0)
	{
		subnItem[creepvineSeedCluster].itemNumber += bufferNumber[creepvineSeedCluster] += 1 * bufferNumber[lubricant];
	}

	if (bufferNumber[siliconeRubber] > 0)
	{
		subnItem[creepvineSeedCluster].itemNumber += bufferNumber[creepvineSeedCluster] += 1 * bufferNumber[siliconeRubber];
	}

	if (bufferNumber[titaniumIngot] > 0)
	{
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 10 * bufferNumber[titaniumIngot];
	}

	if (bufferNumber[wallLocker] > 0)
	{
		subnItem[titanium].itemNumber += bufferNumber[titanium] += 2 * bufferNumber[wallLocker];
	}

	if (bufferNumber[wiringKit] > 0)
	{
		subnItem[silverOre].itemNumber += bufferNumber[silverOre] += 2 * bufferNumber[wiringKit];
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

	printf("\nThank you and goodbye\n");
	system("pause");
	return 0;
}