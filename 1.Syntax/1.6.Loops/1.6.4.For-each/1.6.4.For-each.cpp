// Этот цикл предоставляет удобный способ 
// итерации по элементам контейнера
//1. Для чтения элементов
//2. Для изменения элементов


#include <iostream>
#include <vector>

int main()
{
    /*for ("элемент" : "контейнер") {
    }*/

    ///                              1. Для чтения элементов

    //// 1.1.Пример использования for-each с массивом
    //int arr[] = { 1, 2, 3, 4, 5 };

    //for (int element : arr) {
    //    std::cout << element << " ";
    //}

    
    //// 1.2.Пример использования for-each с вектором
    //std::vector<int> vec = {6, 7, 8, 9, 10};
    //
    //for (int element : vec) {
    //    std::cout << element << " ";
    //}
    
    ////1.3. Пример с использованием const
    //{
    //    std::vector<int> vec = { 6, 7, 8, 9, 10 };
    //    for (const auto& element : vec) {
    //        // element доступен только для чтения
    //        std::cout << element << " ";
    //    }
    //    std::cout << std::endl;
    //}


    ////1.4. Пример вывода матрицы:
    //{
    //    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

    //    for (const auto& row : matrix) {
    //        for (int element : row) {
    //            std::cout << element << " ";
    //        }
    //        std::cout << std::endl;
    //    }

    //}


    ///                              2. Для изменения элементов
    //2.1.
    //{
    //    std::vector<int> vec = { 1, 2, 3, 4, 5 };

    //    for (int &element : vec) {
    //        element *= 2; // Умножаем каждый элемент на 2
    //    }
    //    // Вывод измененного вектора
    //    for (int element : vec) {
    //        std::cout << element << " ";
    //    }

    //}


    return 0;
}
