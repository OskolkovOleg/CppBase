////��������� ����������
//
//// include "pch.h" // ��������� ������������� ����������� � ��������
//// ��������� ������ � <>
//
//#include <locale.h>
//
//// ���������
//#define WIN //���������� ��� �����
//
//#ifdef WIN
//	#include <iostream>
//	using namespace std;
//#else
//	#include <stdio.h>
//#endif
//
//#define TWO 2
//#define FOUR TWO*TWO
//#define PX std::cout<< "X ����� " << x << std::endl
//#define STR "X ����� "
//#define FOUR TWO*TWO
//#define SQUARE(X) X*X // ������
//#define P(A, B) 2*A*B // ������
//
//#undef P //�������� ���������
//
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int x = TWO;
//	PX;
//	x = FOUR;
//	cout << STR << x << endl;
//	x = SQUARE(3);
//	PX;
//
//	//int x = 5;
//#ifdef WIN
//	cout << x << endl;
//#else
//	printf("%d\n", x);
//#endif
//	return 0;
//	
//}