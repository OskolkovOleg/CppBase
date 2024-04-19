//В C++, векторы представляют собой динамические массивы, 
//которые предоставляют гибкие возможности для хранения данных.

#include <vector>
#include <iostream>

int main()
{
   /// Пустой
   std::vector<int> vec1;

   /// Вектор с 5 элементами, все инициализированы нулями
   std::vector<int> vec2(5, 0);
   std::vector<int> vec77{0, 8, 9}; // vec77 = {0, 8, 9}
   for (auto &x : vec77) std::cout << x << std::endl;
   


   /// Сразу со значениями
   std::vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7, 8, 9};


   /// Array -> Vector
   // Исходный массив
   int myArray[] = { 1, 2, 3, 4, 5 };

   // Получаем размер массива
   int arraySize = sizeof(myArray) / sizeof(myArray[0]);

   // Преобразование массива в вектор
   std::vector<int> vec4(myArray, myArray + arraySize);
   // Теперь myVector содержит элементы из myArray


   ///Создание вектора с помощью другого вектора:
   std::vector<int> vec5 = { 1, 2, 3, 4, 5 };
   // Перемещение элементов из vec5 в vec6
   std::vector<int> vec6(vec5);
// #include <type_traits>
//    std::vector<int> vec6(std::move(vec5));


   ///Создание вектора пользовательского типа:
   struct Point {
       int x, y;
       Point(int x, int y) : x(x), y(y) {}
   };
   std::vector<Point> point_vec = { {1, 2}, {3, 4}, {5, 6} };
}
