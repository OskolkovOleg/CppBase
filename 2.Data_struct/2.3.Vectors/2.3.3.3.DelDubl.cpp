#include <iostream>
#include <vector>
#include <locale.h>
#include <algorithm>


int main() {
   setlocale(LC_ALL, "rus");
   // ������� ������ ����� �����
   std::vector<int> myVector = { 1, 2, 2, 3, 4, 5, 5};

   //�������� ����������:
   //���������� ������� (��������������� ������� ��� std::unique).
   std::sort(myVector.begin(), myVector.end());

   //�������� ���������� �� ���������������� �������.
   myVector.erase(std::unique(myVector.begin(), 
                              myVector.end()),
                   myVector.end());

   for (auto element : myVector) {
       std::cout << element << "\n";
   }

   return 0;
}