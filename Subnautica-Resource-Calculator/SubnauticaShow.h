#pragma once

namespace Subnautica
{
	void show(const std::string& levelstr, std::vector<item>& itemLevel)
	{
		auto count = itemLevel.begin();
		while (count != itemLevel.end())
		{
			if (count->itemNumber > 0)
			{
				std::cout << "\n" << levelstr << std::endl;
				std::cout << "\t- " << count->itemName << " = " << count->itemNumber << std::endl;
				count++;
				break;
			}
			count++;
		}
		for (auto i = count; i != itemLevel.end(); i++)
		{
			if (i->itemNumber > 0)
			{
				std::cout << "\t- " << i->itemName << " = " << i->itemNumber << std::endl;
			}
		}
	}
} // namespace Subnautica