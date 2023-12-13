#include <iostream>
#include "GreeterLib.h"
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter greeter;
    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    std::cout << greeter.greet(name);
}