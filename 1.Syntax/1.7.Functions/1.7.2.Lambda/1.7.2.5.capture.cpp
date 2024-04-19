#include <iostream>

using namespace std;

int main() {

    int x = 42;

    // lambda с захватом переменной x по ссылке
    auto lambda = [&]() {
        cout << "x in lambda: " << x << endl;
        };

    x = 100; // Изменение значения переменной x

    lambda(); // Вызов lambda-выражения

    return 0;
}