#include <iostream>

// Пример функции высшего порядка
int applyOperation(int a, int b, int (*operation)(int, int)) {
	return operation(a, b);
}


// Функции, которые могут быть переданы в качестве аргумента
int add(int a, int b) {
	return a + b;
}


int subtract(int a, int b) {
	return a - b;
}


//int main() {
//	std::cout << applyOperation(5, 3, add) << std::endl;       // Вывод: 8
//	std::cout << applyOperation(5, 3, subtract) << std::endl;  // Вывод: 2
//
//	return 0;
//}