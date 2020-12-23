#include "../../../include/pantherinae/cloudedLeopards/CloudedLeopards.hpp"
#include <sstream>

std::string CloudedLeopards::getLatinName() const {
	return "Neofelis";
}

std::string CloudedLeopards::getRussianName() const {
	return "Дымчатые леопарды";
}

std::string CloudedLeopards::getArea() const {
	return "Распространён в юго-восточной Азии";
}


std::string CloudedLeopards::getClassification() const {
	return Pantherinae::getClassification() + "Род: Дымчатые леопарды\n";
}

std::string CloudedLeopards::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	return oss.str();
}
