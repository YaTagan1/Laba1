#include "Threader.h"  //В Threader.h содержится только объявление функции work

Officiant worker;

void work(){
	srand(time(nullptr));
	std::this_thread::sleep_for(std::chrono::milliseconds((rand() % 10000) / 3 + (rand() % 100)));
	worker.GetOrder();
}
