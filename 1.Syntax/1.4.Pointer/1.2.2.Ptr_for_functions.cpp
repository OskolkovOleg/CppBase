//// ��������� �� �������
//#include <iostream>
//using namespace std;
//
//////��� ��� ��������
////void foo() {
////	cout << "foo\n";
////}
////
////void print() {
////	cout << "print\n";
////}
////
////void print2(int a, int b) {
////	cout << a << " " << b << " print\n";
////}
////
////int sign(double x) {
////	if (x < 0) return -1;
////	else if (x > 0) return 1;
////
////	return 0;
////}
////
////int main() {
////	// ��� �������(*��� ���������)(������������ ����������)
////	void(*ptr_func)();
////	// ��� ����������� �� ����� ������ ������� 
////	ptr_func = foo;
////	ptr_func = print;
////	ptr_func();
////
////	void(*ptr_func2)(int, int);
////	ptr_func2 = print2;
////	ptr_func2(4, 5);
////
////	int(*ptr_func3)(double);
////	ptr_func3 = sign;
////	cout << ptr_func3(3.23) << endl;
////
////}
//
////��� ������:
//const char* getInfoFromFile() {
//	return "������ �����";
//}
//
//const char* getInfoFromDB() {
//	return "������ �� ���� ������";
//}
//
////void showInfo(int nFunc) {
////	switch (nFunc)
////	{
////	case 0: cout << getInfoFromFile() << endl; break; 
////	case 1: cout << getInfoFromDB() << endl; break;
////	}
////}
//
//void showInfo(const char* (*info)()) {
//	cout << info() << endl;
//}
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	//showInfo(1)
//	showInfo(getInfoFromFile);
//
//	return 0;
//}