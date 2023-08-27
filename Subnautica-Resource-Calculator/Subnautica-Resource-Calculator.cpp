#include <iostream>
#include <exception>

#include "SubnauticaCalculating.h"
#include "SubnauticaInitialize.h"
#include "SubnauticaInput.h"
#include "SubnauticaShow.h"

int main()
{
	Subnautica::item input;

	input.itemName = "";
	input.itemNumber = 0;
	try
	{
		Subnautica::fileReading(".\\1Primary.txt", Subnautica::primary_1st);
		Subnautica::fileReading(".\\2Secondary.txt", Subnautica::secondary_2nd);
		Subnautica::fileReading(".\\3Tertiary.txt", Subnautica::tertiary_3rd);
		Subnautica::fileReading(".\\4Quaternary.txt", Subnautica::quaternary_4th);
		Subnautica::fileReading(".\\5Quinary.txt", Subnautica::quinary_5th);
		Subnautica::pointerSetting();

		while (input.itemName != "EXIT")
		{
			input = Subnautica::keyboardInput();

			if (input.itemName == "DONE")
			{
				for (int i = 0; i < 40; i++)
				{
					std::cout << "=";
				}
				Subnautica::show("1st Primary", Subnautica::primary_1st);
				Subnautica::show("2nd Secondary", Subnautica::secondary_2nd);
				Subnautica::show("3rd Tertiary", Subnautica::tertiary_3rd);
				Subnautica::show("4th Quaternary", Subnautica::quaternary_4th);
				Subnautica::show("5th Quiary", Subnautica::quinary_5th);
				for (int i = 0; i < 40; i++)
				{
					std::cout << "=";
				}
				std::cout << "\n";
				Subnautica::resetItemNumber(Subnautica::primary_1st);
				Subnautica::resetItemNumber(Subnautica::secondary_2nd);
				Subnautica::resetItemNumber(Subnautica::tertiary_3rd);
				Subnautica::resetItemNumber(Subnautica::quaternary_4th);
				Subnautica::resetItemNumber(Subnautica::quinary_5th);
			}
			else
			{
				Subnautica::calculating(input);
			}
		};
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const std::string& e)
	{
		std::cerr << e << std::endl;
	}
	std::cout << "\nThank you and goodbye.\n" << std::endl;
	return 0;
}

/*
	HOW TO ADD NEW ITEMS
	1. ADD TO "LEVEL.txt".
	2. ADD A POINTER TO "SubnaticaInitialize.h".
	3. ADD TO "pointerSetting()".
	4. ADD TO "SubnauticaCalculating.h".
	5. ADD TO "calculating()".
*/