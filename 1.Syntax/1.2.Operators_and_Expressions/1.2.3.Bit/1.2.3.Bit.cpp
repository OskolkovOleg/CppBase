//// Битовые операции
////1.Побитовое отрицание оператор '~'
////2.Побитовое И оператор '&'
////3.Побитовое ИЛИ оператор '|'
////4.Побитовое исключающее ИЛИ (XOR) оператор '^'
////5.Битовый сдвиг влево("<<") и вправо(">>")
//
//
//#include <iostream>
//#include <locale.h>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	/*unsigned char  используется просто как 8-ми битный тип, не более того
//	unsigned важно, так как со знаковыми переменными появится еще бит знака 
//	и можно запутаться*/
//
//	///					1.Побитовое отрицание оператор '~'
//	//unsigned char var = 153; // Двоичная запись 10011001
//	//unsigned char not_v = ~var; // Результат: 01100110 (число 102)
//	//// 102 + 153 = 255 Прикольно!
//	//cout << static_cast<int>(not_v) << endl;
//
//
//	///					2.Побитовое И оператор '&'
//	////Ex: 1
//	//unsigned char flags = 5; 
//	//unsigned char mask = 4; 
//
//	//unsigned char res = flags & mask;
//	//cout << static_cast<int>(res) << endl;
//
//	////Ex: 2
//	//unsigned char flags = 13; //Двоичная запись 00001101
//	//unsigned char mask = 5;   //Двоичная запись 00000101
//	//if ((flags & mask) == mask) cout << "Включен 0-й и 2-й бит числа\n";
//	//else cout << "Второй бит выключен\n";
//
//	////Ex: 3
//	//unsigned char flags = 13; //Двоичная запись 00001101
//	//unsigned char mask = 5;   //Двоичная запись 00000101
//
//	//flags = flags & ~mask; //00001000 отключили выборочные биты
//	//flags &= ~mask;
//
//	
//	///							3.Побитовое ИЛИ оператор '|'
//	//unsigned char flags = 8; //Двоичная запись 00001000
//	//unsigned char mask = 5;  //Двоичная запись 00000101
//	//flags = flags | mask; //00001101 побитовое сложение
//	//flags |= mask;
//
//
//	///					4.Побитовое исключающее ИЛИ (XOR) оператор '^'
//	////Ex: 1
//	//unsigned char flags = 9; //двоичная запись 00001001
//	//unsigned char mask = 1;  //двоичная запись 00000001
//
//	//// Включение и выключение определенных битов
//	//flags = flags ^ mask; //двоичная запись 00001000 число 8
//	//cout << static_cast<int>(flags) << endl;
//
//	//flags ^= mask; //двоичная запись 00001001 число 9
//	//cout << static_cast<int>(flags) << endl;
//
////	//Ex: 2
////	char msg[] = "Привет мир!";
////	unsigned char key = 1745;
////#include <string.h>
////
////	int N = strlen(msg);
////
////	// Шифруем:
////	for (int i = 0; i < N; ++i)
////		msg[i] ^= key;
////
////	//Отображаем зашифрованное сообщение
////	for (int i = 0; i < N; ++i) cout << msg[i];
////	cout << endl;
////
////	//Расшифровываем:
////	for (int i = 0; i < N; ++i)
////		msg[i] ^= key;
////
////
////	//Отображаем расшифрованное сообщение
////	for (int i = 0; i < N; ++i) cout << msg[i];
////	cout << endl;
//
//	
//	///				5.Битовый сдвиг влево("<<") и вправо(">>")
//	// Эти операции вразы быстрее * и /
//	//unsigned char x = 160; // 10100000
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 01010000 (число 80)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00101000 (число 40)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00010100 (число 20)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00001010 (число 10)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00000101 (число 5)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00000010 (число 2)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00000001 (число 1)
//	//cout << static_cast<int>(x) << endl;
//
//	//x = x >> 1; // 00000000 (число 0)
//	//cout << static_cast<int>(x) << endl;
//
//
//	//unsigned char x = 5; // 00000101
//	//cout << (int)x << endl;
//
//	//x = x << 1; // 00001010 (число 10)
//	//cout << (int)x << endl;
//
//	//x = x << 1; // 00010100 (число 20)
//	//cout << (int)x << endl;
//
//	//x = x << 1; // 00001010 (число 40)
//	//cout << (int)x << endl;
//
//	//x = x << 1; // 00010100 (число 80)
//	//cout << (int)x << endl;
//
//	//x = x << 1; // 00101000 (число 160)
//	//cout << (int)x << endl;
//
//	return 0;
//}
