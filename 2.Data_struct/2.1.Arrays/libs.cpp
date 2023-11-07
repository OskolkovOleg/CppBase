#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector<int> vec = {5, 3, 1, 4, 2};

    // Сортировка вектора
    sort(vec.begin(), vec.end());

    //Поиск элемента в векторе
    bool found = binary_search(vec.begin(), vec.end(), 3);

    // Перестановка элементов
    reverse(vec.begin(), vec.end());

    // Вывод вектора на экран
    for (auto elem : vec){
        cout << elem << " ";
    }

    cout << endl;

    return 0;
}