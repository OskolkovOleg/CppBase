#include <iostream>
#include <locale.h>

void up_and_down(int);

//int main() {
//	setlocale(LC_ALL, "rus");
//	up_and_down(1);
//
//	return 0;
//}

// Рекурсия
void up_and_down(int n) {
	std::cout << "Уровень вниз " << n << std::endl;
	if (n < 4) up_and_down(n + 1);
	std::cout << "Уровень вверх " << n << std::endl;

}