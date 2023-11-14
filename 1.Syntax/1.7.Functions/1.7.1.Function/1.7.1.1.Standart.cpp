//Функции

#include <iostream>
#include <locale.h>
using namespace std;

// Прототип функции
float perimetr(float, float);
void show_ar(int[], int);


//int main() {
//	setlocale(LC_ALL, "rus");
//	{
//		int w = 5;
//		float h = 3.4;
//
//		// Вызов функции
//		float P1 = perimetr(w, h);
//		float P2 = perimetr(5, 4);
//		cout << P1 << " " << P2 << endl;
//
//		int b[] = { 4,3,2,-5,6,0 };
//		int N = sizeof(b) / sizeof(int);
//
//		// Вызов функции
//		show_ar(b, N);
//	}
//	return 0;
//}


// Определение функции
float perimetr(float a, float b) {
	float res = 2 * (a + b);
	return res;
}


// Определение процедуры
void show_ar(int a[], int N) {
	for (int i = 0; i < N; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	// Ничего не возвращает
}






