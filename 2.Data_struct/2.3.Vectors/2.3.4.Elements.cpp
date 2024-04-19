#include <iostream>
#include <vector>
#include <locale.h>


int main() {
   setlocale(LC_ALL, "rus");
   // Создаем вектор целых чисел
   std::vector<int> myVector = { 1, 2, 3, 4, 5 };

   // Доступ к элементам вектора с использованием оператора []
   std::cout << "Первый элемент: " << myVector[0] << std::endl;
   std::cout << "Второй элемент: " << myVector[1] << std::endl;
   // Используйте back() для получения последнего элемента вектора
   int lastElement = myVector.back();

   
   // Доступ к элементам вектора с использованием метода at()
   std::cout << "Первый элемент: " << myVector.at(0) << std::endl;
   std::cout << "Второй элемент: " << myVector.at(1) << std::endl;


   // Изменить значение
   myVector[0] = 100;
   std::cout << "Первый элемент: " << myVector.at(0) << std::endl;


   ///Вставка элементов
   // Добавление элементов в вектор с использованием push_back()
   myVector.push_back(10);
   myVector.push_back(20);
   myVector.push_back(30);

   // Вставка элемента со значением 15 после первого элемента
   myVector.insert(myVector.begin() + 1, 15);
   //-вставка элемента в указанную позицию.
   //myVector.insert(iterator, value); 
   //-вставка нескольких копий элемента в указанную позицию.
   //myVector.insert(iterator, count, value); 
   //-вставка элементов из другого диапазона в указанную позицию.
   //myVector.insert(iterator, begin, end); 

   // Вставка элементов из другого вектора, 
   // начиная с третьего элемента
   std::vector<int> additVector = { 10, 20, 30 };
   myVector.insert(myVector.begin() + 2, additVector.begin(), additVector.end());

   // Добавление трех копий элемента 42 в конец вектора
   myVector.insert(myVector.end(), 3, 42);




   /// Удаление элементов
   //удаление последнего элемента.
   myVector.pop_back();

   //удаление элемента по указанному итератору
   //myVector.erase(iterator);

   //удаление элементов в указанном диапазоне
   //myVector.erase(begin, end);

   //удаление всех элементов из вектора.
   //myVector.clear()

   return 0;
}