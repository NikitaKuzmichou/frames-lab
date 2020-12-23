#include "../include/Felidae.hpp"
#include <sstream>

std::string Felidae::getLatinName() const {
	return "Felidae";
}

std::string Felidae::getRussianName() const {
	return "��������� ��������";
}

std::string Felidae::getClassification() const {
	std::ostringstream oss;
	oss << "�����: ���������\n";
	oss << "�������: ��������\n";
	oss << "���: ��������\n";
	oss << "�����: �������������\n";
	oss << "�����: ������\n";
	oss << "���������: �������\n";
	return oss.str();
}

std::string Felidae::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	return oss.str();
}
