//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string myString = "Hello, World!";
//
//	/// ���������
//	// ���������
//	std::string substring = myString.substr(7, 5); // "World" � 7 5 ����
//
//	// find(), rfind() : ���� ������(���������) ��������� ��������� � ���������� �������.
//	size_t pos = myString.find("World"); // 7
//
//	// ������ ���������
//	myString.replace(7, 5, "Universe"); // "Hello, Universe!"
//
//	// ������� ���������
//	myString.insert(12, " Awesome"); // "Hello, Universe Awesome!"
//
//	// �������� ���������
//	myString.erase(7, 9);  // "Hello Awesome!"
//
//	//substr(), copy(): ������� ����� ����� ������.
//	std::string sub = myString.substr(7, 5); // ����� ��������� ������� � 7-�� ������� ������ 5 ��������
//	char buffer[10];
//	myString.copy(buffer, 5, 7); // �������� 5 �������� ������� � 7-�� ������� � �����
//
//
//	return 0;
//}