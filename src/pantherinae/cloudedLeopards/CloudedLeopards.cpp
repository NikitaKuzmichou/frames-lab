#include "../../../include/pantherinae/cloudedLeopards/CloudedLeopards.hpp"
#include <sstream>

std::string CloudedLeopards::getLatinName() const {
	return "Neofelis";
}

std::string CloudedLeopards::getRussianName() const {
	return "�������� ��������";
}

std::string CloudedLeopards::getArea() const {
	return "������������ � ���-��������� ����";
}


std::string CloudedLeopards::getClassification() const {
	return Pantherinae::getClassification() + "���: �������� ��������\n";
}

std::string CloudedLeopards::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	return oss.str();
}
