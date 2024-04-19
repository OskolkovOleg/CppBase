#include <iostream>
#include <vector>
#include <locale.h>


int main() {
   setlocale(LC_ALL, "rus");
   // ������� ������ ����� �����
   std::vector<int> myVector = { 1, 2, 3, 4, 5 };

   // ������ � ��������� ������� � �������������� ��������� []
   std::cout << "������ �������: " << myVector[0] << std::endl;
   std::cout << "������ �������: " << myVector[1] << std::endl;
   // ����������� back() ��� ��������� ���������� �������� �������
   int lastElement = myVector.back();

   
   // ������ � ��������� ������� � �������������� ������ at()
   std::cout << "������ �������: " << myVector.at(0) << std::endl;
   std::cout << "������ �������: " << myVector.at(1) << std::endl;


   // �������� ��������
   myVector[0] = 100;
   std::cout << "������ �������: " << myVector.at(0) << std::endl;


   ///������� ���������
   // ���������� ��������� � ������ � �������������� push_back()
   myVector.push_back(10);
   myVector.push_back(20);
   myVector.push_back(30);

   // ������� �������� �� ��������� 15 ����� ������� ��������
   myVector.insert(myVector.begin() + 1, 15);
   //-������� �������� � ��������� �������.
   //myVector.insert(iterator, value); 
   //-������� ���������� ����� �������� � ��������� �������.
   //myVector.insert(iterator, count, value); 
   //-������� ��������� �� ������� ��������� � ��������� �������.
   //myVector.insert(iterator, begin, end); 

   // ������� ��������� �� ������� �������, 
   // ������� � �������� ��������
   std::vector<int> additVector = { 10, 20, 30 };
   myVector.insert(myVector.begin() + 2, additVector.begin(), additVector.end());

   // ���������� ���� ����� �������� 42 � ����� �������
   myVector.insert(myVector.end(), 3, 42);




   /// �������� ���������
   //�������� ���������� ��������.
   myVector.pop_back();

   //�������� �������� �� ���������� ���������
   //myVector.erase(iterator);

   //�������� ��������� � ��������� ���������
   //myVector.erase(begin, end);

   //�������� ���� ��������� �� �������.
   //myVector.clear()

   return 0;
}