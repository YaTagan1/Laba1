#include "Officiant.h"

void Officiant::GetOrder() {
	Zakaz zak;
	num++;
	zak.sost(num);
}

void Zakaz::sost(short nom) {
	std::cout << nom << " заказ принят" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 5000));
	std::cout << nom << " заказ доставлен на кухню" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 10000));
	std::cout << nom << " заказ готов" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000));
	std::cout << nom << " заказ доставлен посетителю" << std::endl;
}