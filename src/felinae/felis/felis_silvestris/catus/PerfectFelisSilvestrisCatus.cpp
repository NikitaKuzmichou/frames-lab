#include "../../../../../include/felinae/felis/felis_silvestris/catus/PerfectFelisSilvestrisCatus.hpp"
#include <sstream>

PerfectFelisSilvestrisCatus::PerfectFelisSilvestrisCatus() :
	FelisSilvestrisCatus(
		"Характер идеального кота",
		"Лежать на диване.\
		\n   1)Спать у хозяина под боком.\
		\n   2)Кушать много еды.\
		\n   3)Играть с игрушками") {
	this->name = name;
}

PerfectFelisSilvestrisCatus::PerfectFelisSilvestrisCatus(
	std::string name) :
	name(name), FelisSilvestrisCatus(
		"Характер идеального кота",
		"Лежать на диване.\
		\n   1)Спать у хозяина под боком.\
		\n   2)Кушать много еды.\
		\n   3)Играть с игрушками") {

}

std::string PerfectFelisSilvestrisCatus::getLatinName() const {
	return "Felis silvestris catus *perfectus*";
}

std::string PerfectFelisSilvestrisCatus::getRussianName() const {
	return "Идеальная кошка";
}

std::string PerfectFelisSilvestrisCatus::getArea() const {
	std::ostringstream oss;
	oss << "Средой обитания кошки, как домашнего животного, ";
	oss << "является жилище человека. В зависимости от условий содержания, ";
	oss << "избранных для кошки её хозяином, кошки делятся ";
	oss << "на тех, которые никогда не покидают жилище ";
	oss << "человека, и тех, которые имеют доступ за пределы дома.";
	oss << "Вне зависимости от условий содержания идеальная кошка может обитать в любом месте";
	return oss.str();
}

int PerfectFelisSilvestrisCatus::getAverageWeight() const {
	return 8;
}

std::string PerfectFelisSilvestrisCatus::getPopulation() const {
	return "Встречается крайне редко. Некоторые считают их вымирающим видом";
}

std::string PerfectFelisSilvestrisCatus::getClassification() const {
	return FelisSilvestrisCatus::getClassification() +  "Подвид подвида: Идеальная кошка\n";
}

void PerfectFelisSilvestrisCatus::setName(std::string& name) {
	this->name = name;
}

std::string PerfectFelisSilvestrisCatus::getName() const {
	return this->name;
}

std::string PerfectFelisSilvestrisCatus::getFullInfo() const {
	std::ostringstream oss;
	oss << "Название на латыни: " << this->getLatinName() << "\n";
	oss << "Название на русском: " << this->getRussianName() << "\n";
	oss << "Классификация\n" << this->getClassification();
	oss << "Ареал обитания: \n" << this->getArea() << "\n";
	oss << "Популяция: " << this->getPopulation() << "\n";
	oss << "Средний вес: " << this->getAverageWeight() << " кг" << "\n";
	oss << "Имя: " << this->getName() << "\n";
	oss << "Тип характера: " << this->getCharacterType() << "\n";
	oss << "Любимое хобби: \n" << this->getFavoriteHobby() << "\n";
	return oss.str();
}
