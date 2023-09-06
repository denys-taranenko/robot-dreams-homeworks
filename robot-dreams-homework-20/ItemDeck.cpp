#include "ItemDeck.h"
#include "Item.h"
#include <fstream>
#include <sstream>
#include <iostream>


ItemDeck::ItemDeck()
{
	std::ifstream databaseFile("items_database.txt");
	if (!databaseFile.is_open())
	{
		throw std::runtime_error("Error! File not found!");
	}
	std::string line;
	while (std::getline(databaseFile, line))
	{
		std::istringstream iss(line);
		std::string itemType, itemName;
		int itemParams = 0;

		if (std::getline(iss, itemType, ';') &&
			std::getline(iss, itemName, ';') &&
			(iss >> itemParams))
		{
			if (itemType == "UndeadWeapon")
			{
				m_itemsDataBase.push_back(new UndeadWeapon(itemName, itemParams));
			}
			else if (itemType == "Weapon")
			{
				m_itemsDataBase.push_back(new Weapon(itemName, itemParams));
			}
			else if (itemType == "ZombieWeapon")
			{
				m_itemsDataBase.push_back(new ZombieWeapon(itemName, itemParams));
			}
		}
	}
	databaseFile.close();

}


ItemDeck::~ItemDeck()
{
	for (Item* item : m_itemsDataBase)
	{
		delete item;
	}
}

std::vector<Item*> ItemDeck::generateItems() const
{
	std::vector<Item*> playerHand;

	const int NUM_ITEMS_TO_PICK = 2;
	std::vector<int> selectedIndices;

	for (int i = 0; i < NUM_ITEMS_TO_PICK; i++)
	{
		unsigned int randomIndex = 0;
		do
		{
			randomIndex = std::rand() % m_itemsDataBase.size();

		} while (std::find(selectedIndices.begin(), selectedIndices.end(), randomIndex) != selectedIndices.end());

		selectedIndices.push_back(randomIndex);
		playerHand.push_back(m_itemsDataBase[randomIndex]);
	}

	return playerHand;
}
