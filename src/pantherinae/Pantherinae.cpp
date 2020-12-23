#include "../../include/pantherinae/Pantherinae.hpp"
#include <sstream>

std::string Pantherinae::getArea() const {
	return "������� �� ������ ������� ����";
}

std::string Pantherinae::getLatinName() const {
	return "Pantherinae";
}

std::string Pantherinae::getRussianName() const {
	return "������� �����";
}

std::string Pantherinae::getClassification() const {
	return __super::getClassification() + "������������: ������� �����\n";
}

std::string Pantherinae::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	return oss.str();
}
