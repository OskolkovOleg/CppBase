//#include <iostream>
//#include <vector>
//
//int main() {
//    // Создание пустого вектора целых чисел
//    std::vector<int> myVector;
//
//    // Инициализация вектора с начальными значениями
//    std::vector<int> anotherVector = { 1, 2, 3, 4, 5 };
//
//    myVector.begin(); //// итератора на начало вектора.
//    myVector.end(); //// итератора на конец вектора.
//    myVector.rbegin(); //// обратного итератора на начало вектора.
//    myVector.rend(); //// обратного итератора на конец вектора.
//    myVector.cbegin(); //// константного итератора на начало вектора.
//    myVector.cend(); //// константного итератора на конец вектора.
//    
//    // C помощью for
//    size_t size = sizeof(anotherVector) / sizeof(anotherVector[0]);
//    for (int i = 0; i < size; i++) {
//        std::cout << anotherVector[i] << " ";
//    }
//
//
//
//    // С помощью for//each
//    std::cout << "Vector elements: ";
//    for (int element : anotherVector) {
//        std::cout << element << " ";
//    }
//
//   /* •	for (const auto& element : myVector) 
//   // итерация по всем элементам вектора.*/
//
//
//
//    // Итератор, указывающий на начало вектора
//    std::vector<int>::iterator itBegin = myVector.begin();
//
//    // Итератор, указывающий на конец вектора
//    std::vector<int>::iterator itEnd = myVector.end();
//
//    // Итерируемся по вектору с использованием итераторов
//    for (std::vector<int>::iterator it = itBegin; it != itEnd; ++it) {
//        std::cout << *it << " ";
//    }
//
//    //iterator++; //перемещение по вектору с использованием итератора.
//
//    return 0;
//}
