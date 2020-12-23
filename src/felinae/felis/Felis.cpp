#include "../../../include/felinae/felis/Felis.hpp"
#include <sstream>

std::string Felis::getLatinName() const {
	return "Felis";
}

std::string Felis::getRussianName() const {
	return "�����";
}

std::string Felis::getArea() const {
	return "�������������� �����������.";
}

std::string Felis::getClassification() const {
	return Felinae::getClassification() + "���: �����\n";
}

std::string Felis::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	return oss.str();
}
