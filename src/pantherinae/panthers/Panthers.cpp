#include "../../../include/pantherinae/panthers/Panthers.hpp"
#include <sstream>

std::string Panthers::getLatinName() const {
	return "Panthera";
}

std::string Panthers::getRussianName() const {
	return "�������";
}

std::string Panthers::getArea() const {
	std::ostringstream oss;
	oss << "�������� ������, ������� ���-������ ������, ";
	oss << "���� ����� �������� �����, ����� � ����������� ������� � ����� �� �������� �������";
	return oss.str();
}


std::string Panthers::getClassification() const {
	return Pantherinae::getClassification() + "���:	�������\n";
}

std::string Panthers::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	return oss.str();
}
