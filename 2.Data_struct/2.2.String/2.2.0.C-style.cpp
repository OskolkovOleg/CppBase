//// Работа со строками
//// В C-style фишка в том, что в C 
//// строка - массив символов
//// Опасно да и уже устарело
//#include <iostream>
//#include <locale.h>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//
//	// Объявление:
//	//{
//	//	char str1[] = "Привет мир";
//	//	char str2[20]; // Массив символов для строки
//	//}
//
//
//	// Ввод/вывод:
//	//{
//	//	// Получилось только с английским
//	//	char str[50];
//	//	cout << "Введите строку: ";
//	//	cin >> str;
//	//	cout << "Вы ввели: " << str << endl;
//	//}
//
//
//	//strlen(str) - возвращает длину строки.
////	{
////		char a[100] = "What что это такое?";
////		int N = strlen(a);
////		cout << N << " - " << a << endl;
////	}
//
//
//	//strcpy(dest, src) - копирует строку src в строку dest.
//	//strcat(dest, src) - конкатенирует (добавляет) строку src к строке dest.
//	/*{
//		char a[100];
//		strcpy_s(a, sizeof(a), "Привет");
//		strcat_s(a, sizeof(a), " мир");
//		cout << a << endl;
//	}*/
//
//
//	//strcmp(str1, str2) - сравнивает две строки. Возвращает 0, если строки равны.
//	//gets_s для ввода
//	/* {
//		char a[100];
//		char b[20];
//		//cin >> b;
//		gets_s(b); // Если вводим предложение
//
//		strcpy_s(a, "Hello World");
//
//		int cmp = strcmp(a, b);
//		if (cmp == 0) cout << "Строки равны\n";
//		else cout << "Строки не равны\n" << cmp;
//	}*/
//
//
//	//puts для вывода
//	/* {
//		char a[100] = "привет ";
//		char b[20] = "мир!";
//
//		puts(a);// авто перевод строки
//		puts(b);
//	}*/
//
//
//	// sprintf_s format строки
//	/* {
//		int age = 20;
//		double weight = 70.5;
//		char name[100] = "Иван";
//		char str[200];
//
//		sprintf_s(str, "Здравствуйте %s! Ваш возраст %d лет, вес %.2f кг", name, age, weight);
//
//		cout << str << endl;
//	}*/
//
//
//	// Некое приведение типов
//	/* {
//		char str_i[] = "120";
//		char str_f[] = "120,50";
//
//		int i = atoi(str_i);
//		float f = atof(str_f);
//
//		cout << i << " " << f << endl;
//	}*/
//
//	return 0;
//}