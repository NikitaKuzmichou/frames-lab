#include "../../include/felinae/Felinae.hpp"
#include <sstream>

std::string Felinae::getLatinName() const {
	return "Felinae";
}

std::string Felinae::getRussianName() const {
	return "Малые кошки";
}

std::string Felinae::getArea() const {
	return "Распространены повсеместно.";
}

std::string Felinae::getClassification() const {
	return Felidae::getClassification() + "Подсемейство: Малые кошки\n";
}

std::string Felinae::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	return oss.str();
}
