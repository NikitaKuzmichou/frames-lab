#include "../../../../../include/felinae/felis/felis_silvestris/catus/FelisSilvestrisCatusDetrimental.hpp"
#include <sstream>

FelisSilvestrisCatusDetrimental::FelisSilvestrisCatusDetrimental() :
	                FelisSilvestrisCatus(
		              "�������� ����-���������",
		              "����� �������� ��������� ������.\
		               \n   1)����� ������� ����. \
		               \n   2)�������� �� ����� ������ �� ����� ��� �������. \
		               \n   3)������������ �����(� ������) ������� ����") {
	this->name = name;
}

FelisSilvestrisCatusDetrimental::FelisSilvestrisCatusDetrimental(
	                                           std::string name) :
	              name(name), FelisSilvestrisCatus(
		              "�������� ����-���������",
		              "����� �������� ��������� ������.\
		               \n   1)����� ������� ����. \
		               \n   2)�������� �� ����� ������ �� ����� ��� �������. \
		               \n   3)������������ �����(� ������) ������� ����") {

}

std::string FelisSilvestrisCatusDetrimental::getLatinName() const {
	return "Felis silvestris catus *detrimental*";
}

std::string FelisSilvestrisCatusDetrimental::getRussianName() const {
	return "�����-���������";
}

std::string FelisSilvestrisCatusDetrimental::getArea() const {
	std::ostringstream oss;
	oss << "������ �������� �����, ��� ��������� ���������, ";
	oss << "�������� ������ ��������. � ����������� �� ������� ����������, ";
	oss << "��������� ��� ����� � ��������, ����� ������� ";
	oss << "�� ���, ������� ������� �� �������� ������ ";
	oss << "��������, � ���, ������� ����� ������ �� ������� ����.";
	oss << "��� ����������� �� ������� ���������� �����-��������� ����� ������� � ����� �����";
	return oss.str();
}

int FelisSilvestrisCatusDetrimental::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisCatusDetrimental::getPopulation() const {
	return "�������������� ����������� � ������ ��������";
}

std::string FelisSilvestrisCatusDetrimental::getClassification() const {
	return FelisSilvestrisCatus::getClassification() + "������ �������: �����-���������\n";
}

void FelisSilvestrisCatusDetrimental::setName(std::string& name) {
	this->name = name;
}

std::string FelisSilvestrisCatusDetrimental::getName() const {
	return this->name;
}

std::string FelisSilvestrisCatusDetrimental::getFullInfo() const {
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
