//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string str = "Hello world";
//
//	//push_back() :��������� ������ � ����� ������.
//	str.push_back('!'); // ��������� '!' � ����� ������
//
//
//	//pop_back(): ������� ��������� ������ �� ������.
//	str.pop_back(); // ������� ��������� ������ �� ������
//
//	/// ������
//	//front(), back(): ���������� ������ �� ������ � ��������� ������ ������ ��������������.
//	char& firstChar = str.front();
//	char& lastChar = str.back();
//
//	//at(), []: ���������� ������ �� ���������� �������.
//	char ch = str.at(0); // ��� char ch = str[0];
//
//	/// ���������
//	//append(), += - ��������� ������� ��� ������ ������ � ����� ������� ������.
//	str.append(" ������");
//	str += " ���!";
//
//	return 0;
//}