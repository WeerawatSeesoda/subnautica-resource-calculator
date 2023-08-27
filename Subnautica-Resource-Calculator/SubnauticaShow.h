#pragma once

namespace Subnautica
{
	void show()
	{
		for (int i = 0; i < 40; i++)
		{
			std::cout << "=";
		}
		std::cout << "\n1st Primary" << std::endl;
		for (auto i = primary_1st.begin(); i != primary_1st.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t" << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
		std::cout << "\n2nd Secondary" << std::endl;
		for (auto i = secondary_2nd.begin(); i != secondary_2nd.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t" << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
		std::cout << "\n3rd Tertiary" << std::endl;
		for (auto i = tertiary_3rd.begin(); i != tertiary_3rd.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t" << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
		std::cout << "\n4th Quatenary" << std::endl;
		for (auto i = quaternary_4th.begin(); i != quaternary_4th.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t" << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
		std::cout << "\n5th Quiary" << std::endl;
		for (auto i = quinary_5th.begin(); i != quinary_5th.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t" << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
		for (int i = 0; i < 40; i++)
		{
			std::cout << "=";
		}
		std::cout << "\n";
	}
} // namespace Subnautica