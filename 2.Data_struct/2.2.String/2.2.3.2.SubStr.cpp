//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string myString = "Hello, World!";
//
//	/// Подстроки
//	// Подстрока
//	std::string substring = myString.substr(7, 5); // "World" с 7 5 симв
//
//	// find(), rfind() : Ищет первое(последнее) вхождение подстроки и возвращает позицию.
//	size_t pos = myString.find("World"); // 7
//
//	// Замена подстроки
//	myString.replace(7, 5, "Universe"); // "Hello, Universe!"
//
//	// Вставка подстроки
//	myString.insert(12, " Awesome"); // "Hello, Universe Awesome!"
//
//	// Удаление подстроки
//	myString.erase(7, 9);  // "Hello Awesome!"
//
//	//substr(), copy(): Создают копию части строки.
//	std::string sub = myString.substr(7, 5); // Копия подстроки начиная с 7-го символа длиной 5 символов
//	char buffer[10];
//	myString.copy(buffer, 5, 7); // Копирует 5 символов начиная с 7-го символа в буфер
//
//
//	return 0;
//}