//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string str = "Hello world";
//
//	//compare(): Сравнивает строки и возвращает 0, если они равны.
//	if (str.compare("Hello, World!") == 0) {
//		std::cout << "Строки равны" << std::endl;
//	}
//
//
//	//find_first_of(), find_last_of(): Ищут первое(последнее) вхождение хотя бы одного из символов заданного набора.
//	size_t pos = str.find_first_of("aeiou"); // Первая гласная буква
//
//
//	//find_first_not_of(), find_last_not_of(): Ищут первое(последнее) вхождение символа, который не является частью заданного набора.
//	size_t pos = str.find_first_not_of("0123456789"); // Первый символ, не являющийся цифрой
//
//
//	//swap(): Меняет содержимое двух строк местами.
//	std::string otherString = "New String";
//	str.swap(otherString); // Меняет содержимое str и otherString
//
//
//	//npos: Статическое член - данные, представляющее максимально возможное значение типа size_t.Используется, например, для указания отсутствия позиции при неудачном поиске.
//	size_t notFound = std::string::npos; // Позиция, обозначающая "не найдено"
//
//
//	//c_str(): Возвращает указатель на массив символов(const char*), представляющих строку.
//	const char* cString = str.c_str();
//	//data() : Возвращает указатель на массив символов, представляющих строку.Этот указатель не обязательно должен быть нуль - терминированным.
//	const char* charArray = str.data();
//
//	return 0;
//}