#include <iostream>

// ������ ������� ������� �������
int applyOperation(int a, int b, int (*operation)(int, int)) {
	return operation(a, b);
}


// �������, ������� ����� ���� �������� � �������� ���������
int add(int a, int b) {
	return a + b;
}


int subtract(int a, int b) {
	return a - b;
}


//int main() {
//	std::cout << applyOperation(5, 3, add) << std::endl;       // �����: 8
//	std::cout << applyOperation(5, 3, subtract) << std::endl;  // �����: 2
//
//	return 0;
//}