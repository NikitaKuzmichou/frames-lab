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
	return "Кошка";
}

std::string FelisSilvestrisCatus::getArea() const {
	std::ostringstream oss;
	oss << "Средой обитания кошки, как домашнего животного, ";
	oss << "является жилище человека. В зависимости от условий содержания, ";
	oss << "избранных для кошки её хозяином, кошки делятся ";
	oss << "на тех, которые никогда не покидают жилище ";
	oss << "человека, и тех, которые имеют доступ за пределы дома.";
	return oss.str();
}

int FelisSilvestrisCatus::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisCatus::getPopulation() const {
	return "Распространены повсеместно";
}

std::string FelisSilvestrisCatus::getClassification() const {
	return FelisSilvestris::getClassification() + "Подвид: Кошка\n";
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
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea() << "\n";
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг\n";
	oss << "Тип характера: " << this->getCharacterType() << "\n";
	oss << "Любимое хобби: \n" << this->getFavoriteHobby() << "\n";
	return oss.str();
}
