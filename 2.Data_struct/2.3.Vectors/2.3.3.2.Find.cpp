//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//int main() {
//	std::vector<int> myVector = { 10, 20, 30, 40, 50 };
//
//	// ���� ������� �� ��������� 30  � ������� find
//	auto it = std::find(myVector.begin(), myVector.end(), 30);
//
//	if (it != myVector.end()) {
//		std::cout << "Element " << 30 << " found at index " << std::distance(myVector.begin(), it) << std::endl;
//	}
//	else {
//		std::cout << "Element " << 30 << " not found in the vector." << std::endl;
//	}
//
//
//	//�������� ����� � ��������������� �������
//	bool found = std::binary_search(myVector.begin(), myVector.end(), 3);
//
//
//	return 0;
//}