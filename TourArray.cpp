#include "TourArray.h"

void TourArray::expand() {
	if (size < capacity) { return; }
	if (capacity == 0) { capacity = 50; }
	else { capacity *= 2; }
	Tour* tour_tmp = new Tour[capacity];

	for (int i = 0; i < size; i += 1) {
		tour_tmp[i] = tours[i];
	}
	delete[] tours;
	tours = tour_tmp;
}
TourArray::TourArray() {
	tours = nullptr;
	size = 0;
	capacity = 0;
	
}
TourArray::~TourArray() {
	delete[] tours;
}

void TourArray::addTour(Tour &tour)
{
	expand();
	tours[size] = tour;
	size += 1;
}

void TourArray::delTour(int id)
{
	for (int i = id; i < size - 1; i += 1) {
		tours[i] = tours[i + 1];
	}

	size -= 1;
}

void TourArray::editTour(int id, Tour &tour)
{
	tours[id] = tour;
}

void TourArray::printALLTour()
{
	for (int i = 0; i < size; i += 1) {
		std::cout << tours[i] << std::endl;
	}
}

Tour* TourArray::findTour(std::string &name)
{
	for (int i = 0; i < size; i += 1) {
		if (name==tours[i].getName()) {
			return &tours[i];
		}
	}
	return nullptr;
}

void TourArray::saveTour(std::string &fileName)
{
	std::ofstream file(fileName);
	if (!file) {
		std::cout << "Error open file.\n";
		return;
	}
	file << size << "\n";

	for (int i = 0; i < size; i++) {
		//file << tours[i] << "\n";
		file << tours[i].getName() << " " 
			<< tours[i].getPeople() << " " 
			<< tours[i].getDate() << " " 
			<< tours[i].getPrice() << " " 
			<< "\n";
	}

	file.close();
}

void TourArray::loadTour(std::string &fileName)
{
	std::ifstream file(fileName);
	if (!file) {
		std::cout << "Error open file.\n";
		return;
	}
	int _size;
	file >> _size;
	if (_size <= 0) {
		std::cout << "No correct date.\n";
		return;
	}
	delete[] tours;
	tours = new Tour[_size];
	capacity = _size;
	size = _size;
	for (int i = 0; i < _size; i += 1) {
		file >> tours[i];
		if (file.fail()) {
			std::cout << "No correct date.\n";
			break;
		}
	}
	file.close();
}
