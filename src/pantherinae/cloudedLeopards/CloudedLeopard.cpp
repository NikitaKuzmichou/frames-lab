#include "../../../include/pantherinae/cloudedLeopards/CloudedLeopard.hpp"
#include <sstream>

std::string CloudedLeopard::getLatinName() const {
	return "Neofelis nebulosa";
}

std::string CloudedLeopard::getRussianName() const {
	return "Дымчатый леопард";
}

std::string CloudedLeopard::getArea() const {
	return "Обитает в юго-восточной Азии: от южного Китая до Малакки и от восточных Гималаев до Вьетнама.";
}


std::string CloudedLeopard::getClassification() const {
	return CloudedLeopards::getClassification() + "Вид: Дымчатый леопард\n";
}

int CloudedLeopard::getAverageWeight() const {
	return 16;
}

std::string CloudedLeopard::getPopulation() const {
	return "Весь вид относят к числу находящихся под угрозой исчезновения";
}

std::string CloudedLeopard::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг";
	return oss.str();
}
