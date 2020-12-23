#include "../../../include/felinae/felis/Felis.hpp"
#include <sstream>

std::string Felis::getLatinName() const {
	return "Felis";
}

std::string Felis::getRussianName() const {
	return "Кошки";
}

std::string Felis::getArea() const {
	return "Распространены повсеместно.";
}

std::string Felis::getClassification() const {
	return Felinae::getClassification() + "Род: Кошки\n";
}

std::string Felis::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	return oss.str();
}
