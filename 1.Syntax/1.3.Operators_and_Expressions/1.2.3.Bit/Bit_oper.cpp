//// ������� ��������
//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//
//	//unsigned char var = 153; // �������� ������ 10011001
//	//unsigned char not_v = ~var; // ���������: 01100110 (����� 102)
//	//// 102 + 153 = 255 ���������!
//
//	//cout << (int)not_v << endl;
//
//
//	/*unsigned char flags = 5; 
//	unsigned char mask = 4; 
//
//	unsigned char res = flags & mask;
//	cout << (int)res << endl;*/
//
//	//unsigned char flags = 13; //�������� ������ 00001101
//	//unsigned char mask = 5;   //�������� ������ 00000101
//
//	//if ((flags & mask) == mask) cout << "������� 0-� � 2-� ��� �����\n";
//	//else cout << "������ ��� ��������\n";
//
//	//unsigned char flags = 13; //�������� ������ 00001101
//	//unsigned char mask = 5;   //�������� ������ 00000101
//
//	//flags = flags & ~mask; //00001000 ��������� ���������� ����
//	//flags &= ~mask;
//
//
//	//unsigned char flags = 8; //�������� ������ 00001000
//	//unsigned char mask = 5;   //�������� ������ 00000101
//
//	//flags = flags | mask; //00001101 ��������� ��������
//	//flags |= mask;
//
//	//XOR ����������� ���
//	//unsigned char flags = 9; //�������� ������ 00001001
//	//unsigned char mask = 1;   //�������� ������ 00000001
//
//	//// ��������� � ���������� ������������ �����
//	//flags = flags ^ mask; //�������� ������ 00001000 ����� 8
//	//cout << (int)flags << endl;
//
//	//flags ^= mask; //�������� ������ 00001001 ����� 9
//	//cout << (int)flags << endl;
//
//	//char msg[] = "������ ���!";
//	//unsigned char key = 1745;
//
//	//int N = strlen(msg);
//
//	//// �������:
//	//for (int i = 0; i < N; ++i)
//	//	msg[i] ^= key;
//
//	////���������� ������������� ���������
//	//for (int i = 0; i < N; ++i) cout << msg[i];
//	//cout << endl;
//
//	////��������������:
//	//for (int i = 0; i < N; ++i)
//	//	msg[i] ^= key;
//
//
//	////���������� �������������� ���������
//	//for (int i = 0; i < N; ++i) cout << msg[i];
//	//cout << endl;
//
//	
//	// ��� �������� ����� ������� * � /
//	//unsigned char x = 160; // 10100000
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 01010000 (����� 80)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00101000 (����� 40)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00010100 (����� 20)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00001010 (����� 10)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00000101 (����� 5)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00000010 (����� 2)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00000001 (����� 1)
//	//cout << (int)x << endl;
//
//	//x = x >> 1; // 00000000 (����� 0)
//	//cout << (int)x << endl;
//
//
//	unsigned char x = 5; // 00000101
//	cout << (int)x << endl;
//
//	x = x << 1; // 00001010 (����� 10)
//	cout << (int)x << endl;
//
//	x = x << 1; // 00010100 (����� 20)
//	cout << (int)x << endl;
//
//	x = x << 1; // 00001010 (����� 40)
//	cout << (int)x << endl;
//
//	x = x << 1; // 00010100 (����� 80)
//	cout << (int)x << endl;
//
//	x = x << 1; // 00101000 (����� 160)
//	cout << (int)x << endl;
//
//	return 0;
//}
