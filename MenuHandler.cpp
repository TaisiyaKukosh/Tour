#include "MenuHandler.h"

void Menu::addTour(TourArray& tourArray)
{
	Tour newTour;
	std::cin >> newTour;
	tourArray.addTour(newTour);
}

void Menu::delTour(TourArray& tourArray)
{
	int id;
	std::cout << "del id: ";
	std::cin >> id;
	tourArray.delTour(id);
}

void Menu::editTour(TourArray& tourArray)
{
	int id;
	std::cout << "edit id: ";
	std::cin >> id;
	Tour newTour;
	std::cin >> newTour;
	tourArray.editTour(id, newTour);
}

void Menu::printALLTour(TourArray& tourArray)
{
	tourArray.printALLTour();
}

void Menu::findTour(TourArray& tourArray)
{
	std::string _name;
	std::cout << "name: ";
	std::cin >> _name;
	Tour* tour = tourArray.findTour(_name);

	if (tour == nullptr)
	{
		std::cout << "Not Found tour" << std::endl;
		return;
	}

	std::cout << *tour;
}

void Menu::saveTour(TourArray& tourArray)
{
	std::string filename;
	std::cout << "file name: ";
	std::cin >> filename;
	tourArray.saveTour(filename);
}

void Menu::loadTour(TourArray& tourArray)
{
	std::string filename;
	std::cout << "file name: ";
	std::cin >> filename;
	tourArray.loadTour(filename);
}
