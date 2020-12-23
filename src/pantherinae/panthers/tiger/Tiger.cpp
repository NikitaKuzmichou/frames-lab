#include "../../../../include/pantherinae/panthers/tiger/Tiger.hpp"
#include <sstream>

std::string Tiger::getLatinName() const {
	return "Panthera tigris";
}

std::string Tiger::getRussianName() const {
	return "Тигр";
}

std::string Tiger::getArea() const {
	std::ostringstream oss;
	oss << "Сохранились на территории 16 стран — ";
	oss << "Бангладеш, Бутан, Вьетнам, Индия, Индонезия, Иран, ";
	oss << "Камбоджа, Китай, КНДР (не подтверждено), Лаос, Малайзия, Мьянма, Непал";
	oss << ", Пакистан, Россия, Таиланд.";
	return oss.str();
}

std::string Tiger::getClassification() const {
	return Panthers::getClassification() + "Вид: Тигр\n";
}

int Tiger::getAverageWeight() const {
	return 100;
}

std::string Tiger::getPopulation() const {
	return "Находится под охраной. Внесён в красную книгу";
}

std::string Tiger::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг";
	return oss.str();
}
