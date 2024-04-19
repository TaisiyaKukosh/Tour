#include "Tour.h"

Tour::Tour() {
	setPeople(0);
	setDate(0);
	setName("oooo");
	setPrice(0);
}
Tour::Tour(int peop, int dat, std::string nam, int pric) {
	setPeople(peop);
	setDate(dat);
	setName(nam);
	setPrice(pric);
}

std::istream& operator>>(std::istream& in, Tour& t) {
	std::cout << "Name: ";
	in >> t.name;
	std::cout << "People: ";
	in >> t.people;
	std::cout << "Date: ";
	in >> t.date;
	std::cout << "Price: ";
	in >> t.price;

	return in;
}
std::ostream& operator<<(std::ostream& os, const Tour& t) {
	os << "Name: " << t.name << " ";
	os << "People: " << t.people << " ";
	os << "Date: " << t.date << " ";
	os << "Price: " << t.price << " ";

	return os;
}