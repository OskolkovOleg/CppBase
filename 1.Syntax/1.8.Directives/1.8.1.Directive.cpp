////Директивы процессора
//
//// include "pch.h" // директива препроцессора собственный в кавычках
//// Сторонний модуль в <>
//
//#include <locale.h>
//
//// Константы
//#define WIN //Компиляция под винду
//
//#ifdef WIN
//	#include <iostream>
//	using namespace std;
//#else
//	#include <stdio.h>
//#endif
//
//#define TWO 2
//#define FOUR TWO*TWO
//#define PX std::cout<< "X равно " << x << std::endl
//#define STR "X равно "
//#define FOUR TWO*TWO
//#define SQUARE(X) X*X // Макрос
//#define P(A, B) 2*A*B // Макрос
//
//#undef P //Отменяет константу
//
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int x = TWO;
//	PX;
//	x = FOUR;
//	cout << STR << x << endl;
//	x = SQUARE(3);
//	PX;
//
//	//int x = 5;
//#ifdef WIN
//	cout << x << endl;
//#else
//	printf("%d\n", x);
//#endif
//	return 0;
//	
//}