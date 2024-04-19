#pragma once

#include "Tour.h"
#include <fstream>

class TourArray {
private:
	Tour* tours;

	int size;
	int capacity;

	void expand();
	
public:
	TourArray();
	~TourArray();
	void addTour(Tour &tour);
	void delTour(int id);
	void editTour(int id, Tour &tour);
	void printALLTour();
	Tour* findTour(std::string &name);
	void saveTour(std::string &fileName);
	void loadTour(std::string &fileName);
};