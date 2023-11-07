#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Привет, мир!";
    int length = str.length();
    string reversed = "";

    for (int i = length - 1; i >= 0; i--) {
        reversed += str[i];
    }

    cout << "Исходная строка: " << str << endl;
    cout << "Развернутая строка: " << reversed << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Привет, мир!";
    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    cout << "Исходная строка: " << str << endl;
    cout << "Развернутая строка: " << reversed << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    if (str.empty()) {
        return str;
    } else {
        return reverseString(str.substr(1)) + str[0];
    }
}

int main() {
    string str = "Привет, мир!";
    string reversed = reverseString(str);

    cout << "Исходная строка: " << str << endl;
    cout << "Развернутая строка: " << reversed << endl;

    return 0;
}