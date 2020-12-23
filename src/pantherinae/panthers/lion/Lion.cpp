#include "../../../../include/pantherinae/panthers/lion/Lion.hpp"
#include <sstream>

std::string Lion::getLatinName() const {
	return "Panthera leo";
}

std::string Lion::getRussianName() const {
	return "���";
}

std::string Lion::getArea() const {
	return "������ ��� ���������� ������ � ��� �� ������.";
}

std::string Lion::getClassification() const {
	return Panthers::getClassification() + "���: ���\n";
}

int Lion::getAverageWeight() const {
	return 150;
}

std::string Lion::getPopulation() const {
	return "������������ �����������";
}

std::string Lion::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��";
	return oss.str();
}
