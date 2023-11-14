#include <iostream>

int module(int);
double module(double);

//int main() {
//	int a1 = module(-3);
//	int a2 = module(-3.5);
//	double a3 = module(-3);
//	double a4 = module(-3.5);
//
//	std::cout << a1 << " " << a2 << " " << a3 << " " << a4;
//	return 0;
//}



// Перегрузка, ускоряет время работы сильно
int module(int x) {
	if (x < 0) x = -x;
	return x;
}

double module(double x) {
	if (x < 0) x = -x;
	return x;
}