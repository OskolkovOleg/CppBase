#include <iostream>
#include <random>

using namespace std;

mt19937 rnd(228);

int main() {
    for (int i = 0; i < 10; i++) 
        cout << rnd()%10 << " ";
}