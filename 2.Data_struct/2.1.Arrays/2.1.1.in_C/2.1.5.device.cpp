#include <iostream>

using namespace std;

int main(){

   int arr[] = {1, 2, 3, 4, 5};
   // arr - это указатель на первый элемент массива
   cout << *arr << endl;
   cout << *(arr+1) << endl;
   cout << *(arr+4) << endl;

   return 0;
}