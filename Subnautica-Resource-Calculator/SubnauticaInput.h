#pragma once
#include <algorithm>
#include <cctype>
#include <iostream>
#include <exception>

namespace Subnautica
{
	//
	//	MAKE STRING TO LOWER CASE
	//
	void toLowerCase(std::string& str)
	{
		std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
	}

	//
	//	CHECK IF THE ITEM THAT USER'S INPUT IS EXIST OR NOT THEN RETURN THE RESULT.
	//
	bool nameChecking(std::string& itemName)
	{
		std::string buffer1 = itemName;
		toLowerCase(buffer1);

		//
		//	COMPARING THE USER'S INPUT TO AN EXISTED ITEM'S NAME.
		//
		for (auto i = quinary_5th.begin(); i != quinary_5th.end(); i++)
		{
			std::string buffer2 = i->itemName;
			toLowerCase(buffer2);

			if (buffer1 == buffer2)
			{
				itemName = i->itemName;
				return true;
			}
		}
		for (auto i = quaternary_4th.begin(); i != quaternary_4th.end(); i++)
		{
			std::string buffer2 = i->itemName;
			toLowerCase(buffer2);

			if (buffer1 == buffer2)
			{
				itemName = i->itemName;
				return true;
			}
		}
		for (auto i = tertiary_3rd.begin(); i != tertiary_3rd.end(); i++)
		{
			std::string buffer2 = i->itemName;
			toLowerCase(buffer2);

			if (buffer1 == buffer2)
			{
				itemName = i->itemName;
				return true;
			}
		}
		for (auto i = secondary_2nd.begin(); i != secondary_2nd.end(); i++)
		{
			std::string buffer2 = i->itemName;
			toLowerCase(buffer2);

			if (buffer1 == buffer2)
			{
				itemName = i->itemName;
				return true;
			}
		}

		return false;
	}

	//
	//	CHECK USER'S INPUT FORMAT IF IT'S CORRECT AND ITEM NAME IF IT EXISTED.
	//	IF CORRECT, RETURN THE ITEM'S NAME AND NUMBER.
	//	IF USER'S WANT TO STOP AN INPUT AND START CALCULATE OR EXIT THE PROGRAM, RETURN "DONE" OR "EXIT" STRING.
	//
	item keyboardInput()
	{
		item input;
		bool isCorrectedName;

		input.itemName = "";
		input.itemNumber = 0;
		isCorrectedName = false;
		std::cout << "\nPlease enter an item's name and its quantity, or type \"done\" to show all the materials you need, or type \"exit\" to close the program." << std::endl;

		//
		//	INPUT AN ITEM NAME BY KEYBOARD AND CHECK IF IT EXIST.
		//
		while (isCorrectedName == false)
		{
			try
			{
				std::cout << "Enter item's name : ";
				std::getline(std::cin, input.itemName);

				if (input.itemName.empty())
				{
					std::cout << "ERROR : Item's name can't be empty. Please try again." << std::endl;
				}
				else if (input.itemName == "exit")
				{
					input.itemName = "EXIT";
					return input;
				}
				else if (input.itemName == "done")
				{
					input.itemName = "DONE";
					return input;
				}
				else
				{
					if (nameChecking(input.itemName) == false)
					{
						std::cout << "Sorry, We don't khow your item. Please try again." << std::endl;
					}
					else
					{
						isCorrectedName = true;
					}
				}
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		};

		while (input.itemNumber < 1)
		{
			try
			{
				std::cout << "How many item: ";
				std::cin >> input.itemNumber;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	//discard 'bad' character(s)

				if (std::cin.fail())
				{
					std::cout << "ERROR : Your input is not an integer." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	//discard 'bad' character(s)
				}
				else
				{
					if (input.itemNumber < 1)
					{
						std::cout << "ERROR : The number must larger than 0. Please Try again." << std::endl;
					}
					else
					{
						return input;
					}
				}
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		};
		return input;
	}
} // namespace Subnautica