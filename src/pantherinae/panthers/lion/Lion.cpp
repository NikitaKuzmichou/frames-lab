#include "../../../../include/pantherinae/panthers/lion/Lion.hpp"
#include <sstream>

std::string Lion::getLatinName() const {
	return "Panthera leo";
}

std::string Lion::getRussianName() const {
	return "Лев";
}

std::string Lion::getArea() const {
	return "Африке лев сохранился только к югу от Сахары.";
}

std::string Lion::getClassification() const {
	return Panthers::getClassification() + "Вид: Лев\n";
}

int Lion::getAverageWeight() const {
	return 150;
}

std::string Lion::getPopulation() const {
	return "Стремительно сокращается";
}

std::string Lion::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг";
	return oss.str();
}
