#include <iostream>
#include <math.h>
using namespace std;

void testFunc() {
    static int runCount = 0;

    cout << "Запустили " << ++runCount << " раз" << endl;
}

int main() {
    testFunc();
    testFunc();
    testFunc();
    testFunc();
    testFunc();
}