//#include <iostream>
//#include <locale.h>
//#include <string>
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	std::string str = "Hello world";
//
//	//compare(): ���������� ������ � ���������� 0, ���� ��� �����.
//	if (str.compare("Hello, World!") == 0) {
//		std::cout << "������ �����" << std::endl;
//	}
//
//
//	//find_first_of(), find_last_of(): ���� ������(���������) ��������� ���� �� ������ �� �������� ��������� ������.
//	size_t pos = str.find_first_of("aeiou"); // ������ ������� �����
//
//
//	//find_first_not_of(), find_last_not_of(): ���� ������(���������) ��������� �������, ������� �� �������� ������ ��������� ������.
//	size_t pos = str.find_first_not_of("0123456789"); // ������ ������, �� ���������� ������
//
//
//	//swap(): ������ ���������� ���� ����� �������.
//	std::string otherString = "New String";
//	str.swap(otherString); // ������ ���������� str � otherString
//
//
//	//npos: ����������� ���� - ������, �������������� ����������� ��������� �������� ���� size_t.������������, ��������, ��� �������� ���������� ������� ��� ��������� ������.
//	size_t notFound = std::string::npos; // �������, ������������ "�� �������"
//
//
//	//c_str(): ���������� ��������� �� ������ ��������(const char*), �������������� ������.
//	const char* cString = str.c_str();
//	//data() : ���������� ��������� �� ������ ��������, �������������� ������.���� ��������� �� ����������� ������ ���� ���� - ���������������.
//	const char* charArray = str.data();
//
//	return 0;
//}