//////Арифметические опреации
//1.Сложение и вычитание
//2.Уможение и возведение в степень
//3.Деление и целочисленное деление
//4.Деление с остатком
//5.Округление
//6.Модуль


#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");

	//							1.Сложение и вычитание
	/*float a = 5.8, b = 7.6;
	double c = a - b;
	int d = (int)(a - b);
	int d2 = (int)a + b;
	std::cout << c << " " << d << " " << d2 << std::endl;

	int var = 0;
	var++;
	std::cout << var << std::endl;

	float arg = 5;
	arg--;
	--arg;
	std::cout << arg << std::endl;*/

	//int a, b, c = 10, d = 10;
	//a = c++; // Сначала присаивается а потом с увеличвается
	//b = ++d; // Сначала увеличивается
	//a += 5;
	//b -= 3;

	//std::cout << a << ' ' << b << ' ' << c << ' ' << d;


	////						2.Уможение и возведение в степень
	/*double a=5, b=65.34465;
	double p = a * b;
	p *= 2;
	std::cout << "p = " << p;*/

//#include <cmath>
//	//double result = std::pow(2, 3);
//	double result = std::pow(27, (double)1/3);
//	double result = std::pow(1024, (double)1/10);
//	std::cout << "Результат возведения в степень: " << result << std::endl;
//
//	// Извлечение квадратного корня из 16
//	double result2 = std::sqrt(16);
//	std::cout << "Квадратный корень: " << result2 << std::endl;


	////						3.Деление и целочисленное деление
	////int a = 8;
	////int b = 3;
	////double c = a / b;
	////double c2 = a / (double)b;
	////double c3 = (double)a / b;
	////// То есть если хотя бы один из сножителей дробный тогда 
	////// ответ дробный иначе отбрасывание дробной части
	////a /= 4;
	////std::cout << c << std::endl << c2 << std::endl << c3;


	////								4.Деление с остатком
	//int ost = 10 % 3;
	//std::cout << ost;


	//										5.Округление
	////5.1 Округление к ближайшему целому ф-ция lround -> int
	//double a = 3.75;
	//int roundedNum = lround(a);
	//std::cout << "Округленное число: " << roundedNum << std::endl;
	
	//5.2 Округление к ближайшему целому ф-ция round -> double
//#include <cmath>
//	double a = 3.75;
//	int roundedNum = static_cast<int>(std::round(a));
//	std::cout << "Округленное число: " << roundedNum << std::endl;
//	//Бонус, округление до n чисел после запятой:
//	double b = 3.1415926535;
//	double roundedNum2 = std::round(b * 100) / 100.0;
//	std::cout << "Округленное число: " << roundedNum2 << std::endl;

//	//5.3 Округление вниз ф-ция floor -> double
//#include <cmath>
//	double a = 3.75;
//	int roundedNum = static_cast<int>(std::floor(a));
//	std::cout << "Округленное число вниз: " << roundedNum << std::endl;

//	//5.4 Округление вниз ф-ция ceil -> double
//#include <cmath>
//	double a = 3.15;
//	int roundedNum = static_cast<int>(std::ceil(a));
//	std::cout << "Округленное число вверх: " << roundedNum << std::endl;


											//6.Модуль
//	//6.1.модуль вещественного числа
//#include <cstdlib>
//	double a = -102;
//	double b = std::abs(a);
//	std::cout << b << std::endl;

//	//6.2.Модуль целого числа
//#include <math.h>
//	int a = -102;
//	int b = std::abs(a);
//	std::cout << b << std::endl;
	return 0;
}