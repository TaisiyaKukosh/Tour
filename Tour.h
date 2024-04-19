#pragma once
#include <string>
#include <iostream>
class Tour {
private:
	int people;
	int date;
	std::string name;
	int price;
public:
	Tour();
	Tour(int peop, int dat, std::string nam, int pric);
	
	int getPeople() { return people; }
	int getDate() { return date; }
	int getPrice() { return price; }
	std::string getName() { return name; }
	
	void setPeople(int peop) {
		people = peop;
	}
	void setDate(int dat) {
		date = dat;
	}
	void setPrice(int pric) {
		price = pric;
	}
	void setName(std::string nam) {
		name = nam;
	}

	friend std::istream& operator>>(std::istream& is, Tour& t);
	friend std::ostream& operator<<(std::ostream& os, const Tour& t);
};