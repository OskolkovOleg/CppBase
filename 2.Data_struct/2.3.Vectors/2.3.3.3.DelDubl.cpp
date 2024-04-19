#include <iostream>
#include <vector>
#include <locale.h>
#include <algorithm>


int main() {
   setlocale(LC_ALL, "rus");
   // Создаем вектор целых чисел
   std::vector<int> myVector = { 1, 2, 2, 3, 4, 5, 5};

   //Удаление дубликатов:
   //сортировка вектора (предварительное условие для std::unique).
   std::sort(myVector.begin(), myVector.end());

   //удаление дубликатов из отсортированного вектора.
   myVector.erase(std::unique(myVector.begin(), 
                              myVector.end()),
                   myVector.end());

   for (auto element : myVector) {
       std::cout << element << "\n";
   }

   return 0;
}