// ��������� � ������ ��������� ������
#include <iostream>
using namespace std;

//int main() {
//	setlocale(LC_ALL, "rus");
//
//	int a = 0;
//	cout << a << endl;
//
//	int* p = &a; // ��������� �� ���������� a
//	int y = *p; // ��������������� ��������� y = 0
//	*p = 2;
//
//	cout << a << endl;
//
//	return 0;
//}


//���������(++) � ���������(--) : 
// ��������� ��������� ����������� 
// ��� �������� �� ������ ���� ������, 
// �� ������� �� ���������, 
// � ��������� ������������ �� ��������� �������.
// ��������� ������ �������� ��������.

// int main() {
// 	setlocale(LC_ALL, "rus");

// 	int a[] = { 1, 2, 3, 4, 5};

// 	int *p = a; // � ������� ��� ��������� �� ������ �������

// 	cout << *p << endl;
// 	p++; // ������������� ����� �� 4 �����
// 	cout << *p << endl;
// 	p++; // ���������� ����������, ����������� � ��������� ������ ������
// 	cout << *p << endl;
// 	p++;
// 	cout << *p << endl;
// 	cout << endl;

// 	int* ptr = &a[2]; // ��������� �� ������ ������� (�������� 3)
// 	cout << *ptr << endl;
// 	ptr = ptr + 2;
// 	cout << *ptr << endl;
// 	ptr = ptr - 1;
// 	cout << *ptr << endl;
// 	return 0;
// }


//int main() {
//	setlocale(LC_ALL, "rus");
//
//	int a = 256;
//	int *p1 = &a;
//	char* p2 = (char*)p1;
//
//	for (int i = 0; i < sizeof(int); ++i)
//		//cout << (int)(*p2++) << endl; //����� �� ������
//		cout << (int)p2[i] << endl;
//
//	return 0;
//}


typedef struct VAR{
	char a;
	int b;
};

int main() {
	setlocale(LC_ALL, "rus");

	VAR v = { '#', 5 };
	VAR* p = &v;

	cout << (*p).a << " " << (*p).b << endl;

	p->a = '*';
	p->b = -8;

	cout << p->a << " " << p->b << endl;

	return 0;
}


// int main() {
// 	setlocale(LC_ALL, "rus");

// 	int* p = new int;
// 	int* p2 = (int *)malloc(sizeof(int));

// 	*p = 1;
// 	*p2 = 2;

// 	cout << *p << " " << *p2 << endl;

// 	delete p;
// 	free(p2);

// 	return 0;
// }

// int main() {
// 	setlocale(LC_ALL, "rus");

// 	int n = 4;
// 	// ������������ ������
// 	int* p = new int[4];

// 	p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4;

// 	for (int i = 0; i < n; ++i)
// 		cout << p[i] << " ";

// 	// ���� ����� �� ����� ����� ������ ������
// 	delete[] p;// ������� ������

// 	return 0;
// }

// void swap(int& a, int& b) {
// 	int temp = a;
// 	a = b;
// 	b = temp;
// }

// int main() {
// 	int arg1 = 10, arg2 = 5;

// 	cout << arg1 << " " << arg2 << endl;

// 	swap(arg1, arg2);

// 	cout << arg1 << " " << arg2 << endl;
	
// 	return 0;
// }