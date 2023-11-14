//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string str = "Hello world";
//
//	//push_back() :Добавляет символ в конец строки.
//	str.push_back('!'); // Добавляет '!' в конец строки
//
//
//	//pop_back(): Удаляет последний символ из строки.
//	str.pop_back(); // Удаляет последний символ из строки
//
//	/// Доступ
//	//front(), back(): Возвращают ссылку на первый и последний символ строки соответственно.
//	char& firstChar = str.front();
//	char& lastChar = str.back();
//
//	//at(), []: Возвращают символ по указанному индексу.
//	char ch = str.at(0); // или char ch = str[0];
//
//	/// Изменение
//	//append(), += - Добавляет символы или другую строку в конец текущей строки.
//	str.append(" Привет");
//	str += " Мир!";
//
//	return 0;
//}