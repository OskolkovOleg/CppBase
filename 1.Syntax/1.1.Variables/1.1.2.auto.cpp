//// �������������� ����������
//#include <iostream>
//#include <list>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	// � ��������� ����������� C++ 11
//	auto b = 5; //int
//	b = 5.6756;
//	cout << b << endl; //5
//
//	// �����:
//	// for (<��� �������� ���������> <��� ����������> : <���������>) {���� �����}
//	int ar1[] = { 2, 3, 4, 2, 1 };
//	for (int val : ar1) {// ��� � python
//		cout << val << endl;
//	}
//
//	double ar[] = { 2.1, 3.5, 4.2, 2.8, 1.0 };
//	//for (auto val : ar) {//�������� ���������� � val
//	// ���� �������� ������ �� ��������, 
//	//�� ����������� �������� ����� ����������� ����� ������,
//	//��� ������� ������ 
//	for (auto& val : ar) { //� val ���������� ������ �� �������
//		cout << val << endl;
//		val = 0;
//	}
//
//	for (const auto& val : ar) { //����� ������ ������ ������
//		cout << val << endl;
//	}
//}
//
////int main() {
////	setlocale(LC_ALL, "rus");
////
////	list<int> ar = { 1,2,3,4,5 };
////	
////	for (const auto& val : ar) { 
////		cout << val << endl;
////	}
////	cout << endl;
////	// ��� �� ������ ���� ����� �������� ���������:
////	for (list<int>::iterator i = ar.begin(); i != ar.end(); ++i)
////		cout << *i << endl;
////
////}