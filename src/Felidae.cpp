#include "../include/Felidae.hpp"
#include <sstream>

std::string Felidae::getLatinName() const {
	return "Felidae";
}

std::string Felidae::getRussianName() const {
	return "Семейство кошачьих";
}

std::string Felidae::getClassification() const {
	std::ostringstream oss;
	oss << "Домен: Эукариоты\n";
	oss << "Царство: Животные\n";
	oss << "Тип: Хордовые\n";
	oss << "Класс: Млекопитающие\n";
	oss << "Отряд: Хищные\n";
	oss << "Семейство: Кошачьи\n";
	return oss.str();
}

std::string Felidae::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	return oss.str();
}
