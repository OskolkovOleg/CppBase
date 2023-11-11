// fseek() ftell()
#include <iostream>
#include "15.h"
using namespace std;

//int main() {
//	setlocale(LC_ALL, "rus");
//
//	FILE* fp;
//
//	fopen_s(&fp, "my_file.txt", "r");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	char ch;
//	fseek(fp, 0, SEEK_END); 
//	int lenght = ftell(fp);
//	cout << "����� ������: " << lenght << endl;
//
//	for (int i = 1; i <= lenght; ++i) {
//		fseek(fp, -i, SEEK_END);
//		ch = getc(fp);
//		putchar(ch); //����������� ������������ �������
//	}
//	putchar('\n'); 
//
//	fclose(fp);
//
//	return 0;
//}


//int main() {
//	setlocale(LC_ALL, "rus");
//
//	FILE* fp;
//
//	fopen_s(&fp, "out_b.dat", "wb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	int a = 1000;
//
//	fwrite((char*)&a, sizeof(int), 1, fp);
//	fclose(fp);
//
//	int b = 0;
//	fopen_s(&fp, "out_b.dat", "rb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	size_t elements = fread((char*)&b, sizeof(int), 1, fp);
//	fclose(fp);
//
//	cout << elements << " " << b << endl;
//
//	return 0;
//}


//typedef struct {
//	char name[50];
//	char lastname[50];
//	unsigned char old;
//	float weight;
//} PERSON;


//int main() {
//	setlocale(LC_ALL, "rus");
//
//	PERSON p = { "����", "������", 24, 77.6 };
//
//	FILE* fp;
//
//	fopen_s(&fp, "out_b.dat", "wb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	int a = 1000;
//
//	fwrite((char*)&p, sizeof(PERSON), 1, fp);
//	fclose(fp);
//
//	PERSON p2;
//	fopen_s(&fp, "out_b.dat", "rb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	size_t elements = fread((char*)&p2, sizeof(PERSON), 1, fp);
//	fclose(fp);
//
//	cout << p2.name << endl << p2.lastname << endl << (int)p2.old << endl << p2.weight << endl;
//
//	return 0;
//}

//constexpr int N = 3;
//
//typedef struct {
//	char name[50];
//	char lastname[50];
//	unsigned char old;
//	float weight;
//} PERSON;
//
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	PERSON p[N] = { {"����", "������", 24, 77.6}, 
//					{"����", "������", 32, 85.3},
//					{"����", "��������", 40, 73.5} };
//
//	FILE* fp;
//
//	fopen_s(&fp, "out_b.dat", "wb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	int a = 1000;
//
//	fwrite((char*)&p, sizeof(PERSON), N, fp);
//	fclose(fp);
//
//	PERSON p2[N]{};
//	fopen_s(&fp, "out_b.dat", "rb");
//
//	if (fp == NULL) {
//		cout << "�� ������� ������� ����" << endl;
//		return 0;
//	}
//
//	int i = 0;
//	while (!feof(fp)) { //feof ���������� ���� ���� ��� �� ����� �����
//		fread((char*)&p2[i], sizeof(PERSON), 1, fp);
//		if (ferror(fp)) { // ����� �������� ������
//			cout << "������ ����������\n";
//			break;
//		}
//		i++;
//	}
//
//	fclose(fp);
//
//	for (int i = 0; i < N; ++i)
//		cout << p2[i].name << endl << p2[i].lastname << endl << (int)p2[i].old << endl << p2[i].weight << endl << endl;
//
//	return 0;
//}


//int main() {
//	setlocale(LC_ALL, "rus");
//
//	if (rename("out/file1.dat", "out/file2.dat") == 0) cout << "���� ������� ������������ \n";
//	else cout << "������ �������������� �����\n";
//
//	if (remove("del.file") != 0) cout << "������ �������� �����\n";
//	else cout << "���� ������� ������\n";
//
//	return 0;
//}