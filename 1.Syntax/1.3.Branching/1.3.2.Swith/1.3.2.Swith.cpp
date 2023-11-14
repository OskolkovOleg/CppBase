// if switch

#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	
	short item;

	cin >> item;

	switch (item) {
	case 1: cout << "Ужасно"; break;
	case 2: cout << "Плохо"; break;
	case 3: cout << "Нормально"; break;
	case 4: cout << "Хорошо"; break;
	case 5: cout << "Отлично"; break;
	default: cout << "Мимо";
	}

	
}