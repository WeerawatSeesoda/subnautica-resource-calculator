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
		Subnautica::resetItemNumber();

		while (input.itemName != "EXIT")
		{
			input = Subnautica::keyboardInput();

			if (input.itemName == "DONE")
			{
				Subnautica::show();
				Subnautica::resetItemNumber();
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
	std::cout << "\nThank you and goodbye.\n";
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