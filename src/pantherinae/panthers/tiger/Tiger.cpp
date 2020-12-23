#include "../../../../include/pantherinae/panthers/tiger/Tiger.hpp"
#include <sstream>

std::string Tiger::getLatinName() const {
	return "Panthera tigris";
}

std::string Tiger::getRussianName() const {
	return "����";
}

std::string Tiger::getArea() const {
	std::ostringstream oss;
	oss << "����������� �� ���������� 16 ����� � ";
	oss << "���������, �����, �������, �����, ���������, ����, ";
	oss << "��������, �����, ���� (�� ������������), ����, ��������, ������, �����";
	oss << ", ��������, ������, �������.";
	return oss.str();
}

std::string Tiger::getClassification() const {
	return Panthers::getClassification() + "���: ����\n";
}

int Tiger::getAverageWeight() const {
	return 100;
}

std::string Tiger::getPopulation() const {
	return "��������� ��� �������. ����� � ������� �����";
}

std::string Tiger::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��";
	return oss.str();
}
