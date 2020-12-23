#include "../../include/pantherinae/Pantherinae.hpp"
#include <sstream>

std::string Pantherinae::getArea() const {
	return "Обитают во многих уголках мира";
}

std::string Pantherinae::getLatinName() const {
	return "Pantherinae";
}

std::string Pantherinae::getRussianName() const {
	return "Большие кошки";
}

std::string Pantherinae::getClassification() const {
	return __super::getClassification() + "Подсемейство: Большие кошки\n";
}

std::string Pantherinae::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	return oss.str();
}
