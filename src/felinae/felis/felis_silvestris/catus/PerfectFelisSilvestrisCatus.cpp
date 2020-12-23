#include "../../../../../include/felinae/felis/felis_silvestris/catus/PerfectFelisSilvestrisCatus.hpp"
#include <sstream>

PerfectFelisSilvestrisCatus::PerfectFelisSilvestrisCatus() :
	FelisSilvestrisCatus(
		"�������� ���������� ����",
		"������ �� ������.\
		\n   1)����� � ������� ��� �����.\
		\n   2)������ ����� ���.\
		\n   3)������ � ���������") {
	this->name = name;
}

PerfectFelisSilvestrisCatus::PerfectFelisSilvestrisCatus(
	std::string name) :
	name(name), FelisSilvestrisCatus(
		"�������� ���������� ����",
		"������ �� ������.\
		\n   1)����� � ������� ��� �����.\
		\n   2)������ ����� ���.\
		\n   3)������ � ���������") {

}

std::string PerfectFelisSilvestrisCatus::getLatinName() const {
	return "Felis silvestris catus *perfectus*";
}

std::string PerfectFelisSilvestrisCatus::getRussianName() const {
	return "��������� �����";
}

std::string PerfectFelisSilvestrisCatus::getArea() const {
	std::ostringstream oss;
	oss << "������ �������� �����, ��� ��������� ���������, ";
	oss << "�������� ������ ��������. � ����������� �� ������� ����������, ";
	oss << "��������� ��� ����� � ��������, ����� ������� ";
	oss << "�� ���, ������� ������� �� �������� ������ ";
	oss << "��������, � ���, ������� ����� ������ �� ������� ����.";
	oss << "��� ����������� �� ������� ���������� ��������� ����� ����� ������� � ����� �����";
	return oss.str();
}

int PerfectFelisSilvestrisCatus::getAverageWeight() const {
	return 8;
}

std::string PerfectFelisSilvestrisCatus::getPopulation() const {
	return "����������� ������ �����. ��������� ������� �� ���������� �����";
}

std::string PerfectFelisSilvestrisCatus::getClassification() const {
	return FelisSilvestrisCatus::getClassification() +  "������ �������: ��������� �����\n";
}

void PerfectFelisSilvestrisCatus::setName(std::string& name) {
	this->name = name;
}

std::string PerfectFelisSilvestrisCatus::getName() const {
	return this->name;
}

std::string PerfectFelisSilvestrisCatus::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea() << "\n";
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��" << "\n";
	oss << "���: " << this->getName() << "\n";
	oss << "��� ���������: " << this->getCharacterType() << "\n";
	oss << "������� �����: \n" << this->getFavoriteHobby() << "\n";
	return oss.str();
}
