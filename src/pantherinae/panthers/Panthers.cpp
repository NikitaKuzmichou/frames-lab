#include "../../../include/pantherinae/panthers/Panthers.hpp"
#include <sstream>

std::string Panthers::getLatinName() const {
	return "Panthera";
}

std::string Panthers::getRussianName() const {
	return "Пантеры";
}

std::string Panthers::getArea() const {
	std::ostringstream oss;
	oss << "Включает Африку, крайний юго-восток Европы, ";
	oss << "Азию кроме северной части, Южную и Центральную Америку и самый юг Северной Америки";
	return oss.str();
}


std::string Panthers::getClassification() const {
	return Pantherinae::getClassification() + "Род:	Пантеры\n";
}

std::string Panthers::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	return oss.str();
}
