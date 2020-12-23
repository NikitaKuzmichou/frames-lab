#include "../../include/felinae/Felinae.hpp"
#include <sstream>

std::string Felinae::getLatinName() const {
	return "Felinae";
}

std::string Felinae::getRussianName() const {
	return "����� �����";
}

std::string Felinae::getArea() const {
	return "�������������� �����������.";
}

std::string Felinae::getClassification() const {
	return Felidae::getClassification() + "������������: ����� �����\n";
}

std::string Felinae::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	return oss.str();
}
