#include "../../../../include/felinae/felis/felis_silvestris/FelisSilvestris.hpp"
#include <sstream>

std::string FelisSilvestris::getLatinName() const {
	return "Felis silvestris";
}

std::string FelisSilvestris::getRussianName() const {
	return "Лесной кот";
}

std::string FelisSilvestris::getArea() const {
	return "Можно найти практически в любой стране мира.";
}

int FelisSilvestris::getAverageWeight() const {
	return 5;
}

std::string FelisSilvestris::getPopulation() const {
	return "Распространены повсеместно";
}

std::string FelisSilvestris::getClassification() const {
	return Felis::getClassification() + "Вид: Лесной кот\n";
}

std::string FelisSilvestris::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea() << "\n";
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг";
	return oss.str();
}
