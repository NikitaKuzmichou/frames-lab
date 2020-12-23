#include "../../../../../include/felinae/felis/felis_silvestris/catus/FelisSilvestrisCatus.hpp"
#include <sstream>

FelisSilvestrisCatus::FelisSilvestrisCatus(std::string characterType,
	                                       std::string favoriteHobby) :
	                               characterType(characterType),
	                               favoriteHobby(favoriteHobby) {

}

std::string FelisSilvestrisCatus::getLatinName() const {
	return "Felis silvestris catus";
}

std::string FelisSilvestrisCatus::getRussianName() const {
	return "�����";
}

std::string FelisSilvestrisCatus::getArea() const {
	std::ostringstream oss;
	oss << "������ �������� �����, ��� ��������� ���������, ";
	oss << "�������� ������ ��������. � ����������� �� ������� ����������, ";
	oss << "��������� ��� ����� � ��������, ����� ������� ";
	oss << "�� ���, ������� ������� �� �������� ������ ";
	oss << "��������, � ���, ������� ����� ������ �� ������� ����.";
	return oss.str();
}

int FelisSilvestrisCatus::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisCatus::getPopulation() const {
	return "�������������� �����������";
}

std::string FelisSilvestrisCatus::getClassification() const {
	return FelisSilvestris::getClassification() + "������: �����\n";
}

void FelisSilvestrisCatus::setCharacterType(std::string characterType) {
	this->characterType = characterType;
}

std::string FelisSilvestrisCatus::getCharacterType() const {
	return this->characterType;
}

void FelisSilvestrisCatus::setFavoriteHobby(std::string favoriteHobby) {
	this->favoriteHobby = favoriteHobby;
}

std::string FelisSilvestrisCatus::getFavoriteHobby() const {
	return this->favoriteHobby;
}

std::string FelisSilvestrisCatus::getFullInfo() const {
	std::ostringstream oss;
	oss << "�������� �� ������: " << this->getLatinName() << "\n";
	oss << "�������� �� �������: " << this->getRussianName() << "\n";
	oss << "�������������\n" << this->getClassification();
	oss << "����� ��������: \n" << this->getArea() << "\n";
	oss << "���������: " << this->getPopulation() << "\n";
	oss << "������� ���: " << this->getAverageWeight() << " ��\n";
	oss << "��� ���������: " << this->getCharacterType() << "\n";
	oss << "������� �����: \n" << this->getFavoriteHobby() << "\n";
	return oss.str();
}
