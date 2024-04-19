// Г(n) = (n-1)!
// Ф-цию можно использовать для вычисления факториала

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n = 5;
    cout << tgamma(n+1);
}
