#include "../../../../include/felinae/felis/felis_silvestris/FelisSilvestris.hpp"
#include <sstream>

std::string FelisSilvestris::getLatinName() const {
	return "Felis silvestris";
}

std::string FelisSilvestris::getRussianName() const {
	return "������ ���";
}

std::string FelisSilvestris::getArea() const {
	return "����� ����� ����������� � ����� ������ ����.";
}

int FelisSilvestris::getAverageWeight() const {
	return 5;
}

std::string FelisSilvestris::getPopulation() const {
	return "�������������� �����������";
}

std::string FelisSilvestris::getClassification() const {
	return Felis::getClassification() + "���: ������ ���\n";
}

std::string FelisSilvestris::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea() << "\n";
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��";
	return oss.str();
}
