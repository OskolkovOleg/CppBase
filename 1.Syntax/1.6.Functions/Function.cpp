////Функции рекурсии прототипы перегрузка

//#include <iostream>
//using namespace std;
//
//
//float perimetr(float, float);
//void show_ar(int[], int);
//int module(int);
//double module(double);
//void up_and_down(int);
//
//
//// kwargs именованные аргументы
//void show_args(short a = 10, float b = 20, int c = 30) {
//	cout << a << " " << b << " " << c << endl;
//}
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	/*int w = 5;
//	float h = 3.4;
//
//	float P1 = perimetr(w, h);
//	float P2 = perimetr(5, 4);
//	cout << P1 << " " << P2 << endl;*/
//
//	/*int b[] = { 4,3,2,-5,6,0 };
//	int N = sizeof(b) / sizeof(int);
//
//	show_ar(b, N);*/
//
//	/*int a1 = module(-3);
//	int a2 = module(-3.5);
//	double a3 = module(-3);
//	double a4 = module(-3.5);
//
//	cout << a1 << " " << a2 << " " << a3 << " " << a4;*/
//
//	//show_args();
//	//show_args(1);
//	//show_args(1, 2);
//	//show_args(1, 2, 3);
//
//	up_and_down(1);
//
//	return 0;
//}
//
//
//float perimetr(float a, float b) {
//	float res = 2 * (a + b);
//	return res;
//}
//
//
//void show_ar(int a[], int N) {
//	for (int i = 0; i < N; ++i) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	// Ничего не возвращает
//}
//
//
//// Перегрузка, ускоряет время работы сильно
//int module(int x) {
//	if (x < 0) x = -x;
//	return x;
//}
//
//double module(double x) {
//	if (x < 0) x = -x;
//	return x;
//}
//
//
//// Рекурсия
//void up_and_down(int n) {
//	cout << "Уровень вниз " << n << endl;
//	if (n < 4) up_and_down(n + 1);
//	cout << "Уровень вверх " << n << endl;
//
//}
