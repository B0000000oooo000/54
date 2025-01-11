#include "sdt.h"
#include <iostream>

//Это учебная программа
int main() {
    int a, b;
    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;
    std::cout << "Сумма: " << a - b << std::endl;
    std::cout << "Частное: " << a / b << std::endl;
    return 0;
}