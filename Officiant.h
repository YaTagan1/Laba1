#pragma once

#include <vector>
#include <string>
#include <thread>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>

class Officiant{
protected:
	short num = 0;
public:
	void GetOrder();
};

class Zakaz : private Officiant {
public:
	void sost(short nom);
};