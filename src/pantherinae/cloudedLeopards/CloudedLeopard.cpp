#include "../../../include/pantherinae/cloudedLeopards/CloudedLeopard.hpp"
#include <sstream>

std::string CloudedLeopard::getLatinName() const {
	return "Neofelis nebulosa";
}

std::string CloudedLeopard::getRussianName() const {
	return "�������� �������";
}

std::string CloudedLeopard::getArea() const {
	return "������� � ���-��������� ����: �� ������ ����� �� ������� � �� ��������� �������� �� ��������.";
}


std::string CloudedLeopard::getClassification() const {
	return CloudedLeopards::getClassification() + "���: �������� �������\n";
}

int CloudedLeopard::getAverageWeight() const {
	return 16;
}

std::string CloudedLeopard::getPopulation() const {
	return "���� ��� ������� � ����� ����������� ��� ������� ������������";
}

std::string CloudedLeopard::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��";
	return oss.str();
}
