//#include <iostream>
//#include <vector>
//
//int main() {
//    // �������� ������� ������� ����� �����
//    std::vector<int> myVector;
//
//    // ������������� ������� � ���������� ����������
//    std::vector<int> anotherVector = { 1, 2, 3, 4, 5 };
//
//    myVector.begin(); //// ��������� �� ������ �������.
//    myVector.end(); //// ��������� �� ����� �������.
//    myVector.rbegin(); //// ��������� ��������� �� ������ �������.
//    myVector.rend(); //// ��������� ��������� �� ����� �������.
//    myVector.cbegin(); //// ������������ ��������� �� ������ �������.
//    myVector.cend(); //// ������������ ��������� �� ����� �������.
//    
//    // C ������� for
//    size_t size = sizeof(anotherVector) / sizeof(anotherVector[0]);
//    for (int i = 0; i < size; i++) {
//        std::cout << anotherVector[i] << " ";
//    }
//
//
//
//    // � ������� for//each
//    std::cout << "Vector elements: ";
//    for (int element : anotherVector) {
//        std::cout << element << " ";
//    }
//
//   /* �	for (const auto& element : myVector) 
//   // �������� �� ���� ��������� �������.*/
//
//
//
//    // ��������, ����������� �� ������ �������
//    std::vector<int>::iterator itBegin = myVector.begin();
//
//    // ��������, ����������� �� ����� �������
//    std::vector<int>::iterator itEnd = myVector.end();
//
//    // ����������� �� ������� � �������������� ����������
//    for (std::vector<int>::iterator it = itBegin; it != itEnd; ++it) {
//        std::cout << *it << " ";
//    }
//
//    //iterator++; //����������� �� ������� � �������������� ���������.
//
//    return 0;
//}
