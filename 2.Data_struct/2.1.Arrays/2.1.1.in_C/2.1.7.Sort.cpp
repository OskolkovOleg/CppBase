#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    const int n = 5;
    int arr[n] = { 5, 4, 3, 2, 1 };
    // arr - это указатель на первый элемент массива
    sort(arr, arr + n);

    for (auto& x : arr) 
         cout << x << " ";

   return 0;
}