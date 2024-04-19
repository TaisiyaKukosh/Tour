#include <iostream>
#include "TourArray.h"
#include "MenuHandler.h"

int main(){
	TourArray tourArray;
	bool flag = false;
	int choice;

	while (!flag) {
		std::cout << "Menu: \n"
			<< "1. Add " << std::endl
			<< "2. Delete " << std::endl
			<< "3. Edit " << std::endl
			<< "4. Print all " << std::endl
			<< "5. Save " << std::endl
			<< "6. Load " << std::endl
			<< "7. Find by name " << std::endl
			<< "0. Exit " << std::endl;

		std::cin >> choice;

		switch (choice)
		{
		case 1:
			Menu::addTour(tourArray);
			break;
		case 2:
			Menu::delTour(tourArray);
			break;
		case 3:
			Menu::editTour(tourArray);
			break;
		case 4:
			Menu::printALLTour(tourArray);
			break;
		case 5:
			Menu::saveTour(tourArray);
			break;
		case 6:
			Menu::loadTour(tourArray);
			break;
		case 7:
			Menu::findTour(tourArray);
			break;
		case 0:
			flag = true;
			break;

		default:
			std::cout << "Unknown command" << std::endl;
			break;
		}

		std::cout << "\n\n";
	
	}

	return 0;
}