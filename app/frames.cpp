#include "../include/felinae/felis/felis_silvestris/catus/PerfectFelisSilvestrisCatus.hpp"
#include "../include/felinae/felis/felis_silvestris/catus/FelisSilvestrisCatus.hpp"
#include "../include/felinae/felis/felis_silvestris/catus/FelisSilvestrisCatusDetrimental.hpp"
#include "../include/felinae/felis/felis_silvestris/FelisSilvestrisBieti.hpp"
#include "../include/pantherinae/cloudedLeopards/CloudedLeopard.hpp"
#include "../include/pantherinae/panthers/lion/Lion.hpp"
#include "../include/pantherinae/panthers/tiger/Tiger.hpp"
#include <iostream>
#include <vector>
#include <Windows.h>

void printSlotInfo(std::shared_ptr<Felidae> felidae) {
	std::cout << "\n==================\n";
	std::cout << felidae->getFullInfo();
	std::cout << "\n==================\n";
}

int main() {
	SetConsoleOutputCP(1251);
	auto frame = std::make_shared<std::vector<std::shared_ptr<Felidae>>>();
	frame->push_back(std::make_shared<Felidae>());
	frame->push_back(std::make_shared<Pantherinae>());
	frame->push_back(std::make_shared<Panthers>());
	frame->push_back(std::make_shared<Tiger>());
	frame->push_back(std::make_shared<Lion>());
	frame->push_back(std::make_shared<CloudedLeopard>());
	frame->push_back(std::make_shared<CloudedLeopards>());
	frame->push_back(std::make_shared<Felinae>());
	frame->push_back(std::make_shared<Felis>());
	frame->push_back(std::make_shared<FelisSilvestrisBieti>());
	frame->push_back(std::make_shared<FelisSilvestris>());
	frame->push_back(std::make_shared<FelisSilvestrisCatus>("Обычной кошки", "Лежать на диване и ничего не делать"));
	frame->push_back(std::make_shared<FelisSilvestrisCatus>("Вредной кошки", "Приставать к хозяину"));
	frame->push_back(std::make_shared<FelisSilvestrisCatusDetrimental>("Пушистая котострофа"));
	frame->push_back(std::make_shared<PerfectFelisSilvestrisCatus>("Мурзик"));
	for (int i = 0; i < frame->size(); ++i) {
		printSlotInfo(frame->at(i));
	}
	return 0;
}