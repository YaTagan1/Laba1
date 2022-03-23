#include <iostream>
#include <Windows.h>

#include "Officiant.h"
#include "Threader.h"

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::thread of1 (work);
    srand(time(nullptr));
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000));
    std::thread of2 (work);
    srand(time(nullptr));
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000));
    std::thread of3 (work);
    srand(time(nullptr));
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000));
    std::thread of4 (work);
    srand(time(nullptr));
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000));
    std::thread of5 (work);
    
    of5.join();
    of4.join();
    of3.join();
    of2.join();
    of1.join();
}