#include "../../../../include/felinae/felis/felis_silvestris/FelisSilvestrisBieti.hpp"
#include <sstream>

std::string FelisSilvestrisBieti::getLatinName() const {
	return "Felis bieti";
}

std::string FelisSilvestrisBieti::getRussianName() const {
	return "��������� (������) �����";
}

std::string FelisSilvestrisBieti::getArea() const {
	std::ostringstream oss;
	oss << "������� � ������� � ������ ������� ������-��������� ����� ";
	oss << "(��������� ������ � ������� ����� ������� � �������, ";
	oss << "� ����� � ������, �����, ��������� � ���������� ��������) � �� ��� ��������.";
	return oss.str();
}

int FelisSilvestrisBieti::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisBieti::getPopulation() const {
	return "��������� ����� � ������ ��������, ��� ��������� � ����� 5 ����� �������� �������� ����";
}

std::string FelisSilvestrisBieti::getClassification() const {
	return Felis::getClassification() + "���: ��������� �����\n";
}

std::string FelisSilvestrisBieti::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea();
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��";
	return oss.str();
}
