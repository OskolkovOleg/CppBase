//// ������ �� ��������
//// � C-style ����� � ���, ��� � C 
//// ������ - ������ ��������
//// ������ �� � ��� ��������
//#include <iostream>
//#include <locale.h>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//
//	// ����������:
//	//{
//	//	char str1[] = "������ ���";
//	//	char str2[20]; // ������ �������� ��� ������
//	//}
//
//
//	// ����/�����:
//	//{
//	//	// ���������� ������ � ����������
//	//	char str[50];
//	//	cout << "������� ������: ";
//	//	cin >> str;
//	//	cout << "�� �����: " << str << endl;
//	//}
//
//
//	//strlen(str) - ���������� ����� ������.
////	{
////		char a[100] = "What ��� ��� �����?";
////		int N = strlen(a);
////		cout << N << " - " << a << endl;
////	}
//
//
//	//strcpy(dest, src) - �������� ������ src � ������ dest.
//	//strcat(dest, src) - ������������� (���������) ������ src � ������ dest.
//	/*{
//		char a[100];
//		strcpy_s(a, sizeof(a), "������");
//		strcat_s(a, sizeof(a), " ���");
//		cout << a << endl;
//	}*/
//
//
//	//strcmp(str1, str2) - ���������� ��� ������. ���������� 0, ���� ������ �����.
//	//gets_s ��� �����
//	/* {
//		char a[100];
//		char b[20];
//		//cin >> b;
//		gets_s(b); // ���� ������ �����������
//
//		strcpy_s(a, "Hello World");
//
//		int cmp = strcmp(a, b);
//		if (cmp == 0) cout << "������ �����\n";
//		else cout << "������ �� �����\n" << cmp;
//	}*/
//
//
//	//puts ��� ������
//	/* {
//		char a[100] = "������ ";
//		char b[20] = "���!";
//
//		puts(a);// ���� ������� ������
//		puts(b);
//	}*/
//
//
//	// sprintf_s format ������
//	/* {
//		int age = 20;
//		double weight = 70.5;
//		char name[100] = "����";
//		char str[200];
//
//		sprintf_s(str, "������������ %s! ��� ������� %d ���, ��� %.2f ��", name, age, weight);
//
//		cout << str << endl;
//	}*/
//
//
//	// ����� ���������� �����
//	/* {
//		char str_i[] = "120";
//		char str_f[] = "120,50";
//
//		int i = atoi(str_i);
//		float f = atof(str_f);
//
//		cout << i << " " << f << endl;
//	}*/
//
//	return 0;
//}