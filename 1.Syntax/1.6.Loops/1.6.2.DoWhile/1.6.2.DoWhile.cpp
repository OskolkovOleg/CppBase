
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");

    //do {
    //    // Тело цикла
    //    // Этот блок кода выполнится как минимум один раз
    //} while ("условие");

    // Ex 1:
    int number;

    do {
        std::cout << "Введите значение от 1 до 5: " << std::endl;
        std::cin >> number;
    } while (1 > number || number > 5);


    return 0;
}

