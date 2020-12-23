#include "../../../../include/felinae/felis/felis_silvestris/FelisSilvestrisBieti.hpp"
#include <sstream>

std::string FelisSilvestrisBieti::getLatinName() const {
	return "Felis bieti";
}

std::string FelisSilvestrisBieti::getRussianName() const {
	return "Китайская (горная) кошка";
}

std::string FelisSilvestrisBieti::getArea() const {
	std::ostringstream oss;
	oss << "Обитает в степных и горных районах северо-западного Китая ";
	oss << "(провинции Ганьсу и Сычуань возле границы с Тибетом, ";
	oss << "а также в Цинхае, Нинся, Синьцзяне и Внутренней Монголии) и на юге Монголии.";
	return oss.str();
}

int FelisSilvestrisBieti::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisBieti::getPopulation() const {
	return "Китайская кошка — редкое животное, она находится в числе 5 самых уязвимых кошачьих мира";
}

std::string FelisSilvestrisBieti::getClassification() const {
	return Felis::getClassification() + "Вид: Китайская кошка\n";
}

std::string FelisSilvestrisBieti::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea();
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг";
	return oss.str();
}
