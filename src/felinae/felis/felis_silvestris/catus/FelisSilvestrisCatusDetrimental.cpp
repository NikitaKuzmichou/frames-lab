#include "../../../../../include/felinae/felis/felis_silvestris/catus/FelisSilvestrisCatusDetrimental.hpp"
#include <sstream>

FelisSilvestrisCatusDetrimental::FelisSilvestrisCatusDetrimental() :
	                FelisSilvestrisCatus(
		              "Характер кота-вредителя",
		              "Драть предметы интерьера жилища.\
		               \n   1)Орать посреди ночи. \
		               \n   2)Носиться по всему жилищу во время сна хозяина. \
		               \n   3)Опрокидывать плохо(и хорошо) стоящие вещи") {
	this->name = name;
}

FelisSilvestrisCatusDetrimental::FelisSilvestrisCatusDetrimental(
	                                           std::string name) :
	              name(name), FelisSilvestrisCatus(
		              "Характер кота-вредителя",
		              "Драть предметы интерьера жилища.\
		               \n   1)Орать посреди ночи. \
		               \n   2)Носиться по всему жилищу во время сна хозяина. \
		               \n   3)Опрокидывать плохо(и хорошо) стоящие вещи") {

}

std::string FelisSilvestrisCatusDetrimental::getLatinName() const {
	return "Felis silvestris catus *detrimental*";
}

std::string FelisSilvestrisCatusDetrimental::getRussianName() const {
	return "Кошка-вредитель";
}

std::string FelisSilvestrisCatusDetrimental::getArea() const {
	std::ostringstream oss;
	oss << "Средой обитания кошки, как домашнего животного, ";
	oss << "является жилище человека. В зависимости от условий содержания, ";
	oss << "избранных для кошки её хозяином, кошки делятся ";
	oss << "на тех, которые никогда не покидают жилище ";
	oss << "человека, и тех, которые имеют доступ за пределы дома.";
	oss << "Вне зависимости от условий содержания кошка-вредитель может обитать в любом месте";
	return oss.str();
}

int FelisSilvestrisCatusDetrimental::getAverageWeight() const {
	return 4;
}

std::string FelisSilvestrisCatusDetrimental::getPopulation() const {
	return "Распространены повсеместно в жилище человека";
}

std::string FelisSilvestrisCatusDetrimental::getClassification() const {
	return FelisSilvestrisCatus::getClassification() + "Подвид подвида: Кошка-вредитель\n";
}

void FelisSilvestrisCatusDetrimental::setName(std::string& name) {
	this->name = name;
}

std::string FelisSilvestrisCatusDetrimental::getName() const {
	return this->name;
}

std::string FelisSilvestrisCatusDetrimental::getFullInfo() const {
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
