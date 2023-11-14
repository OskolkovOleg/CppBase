//  Алгоритмы переворота строки

/// 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string str = "Привет, мир!";
//    int length = str.length();
//    string reversed = "";
//
//    for (int i = length - 1; i >= 0; i--) {
//        reversed += str[i];
//    }
//
//    cout << "Исходная строка: " << str << endl;
//    cout << "Развернутая строка: " << reversed << endl;
//
//    return 0;
//}



 ///2
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    string str = "Привет, мир!";
//    string reversed = str;
//    reverse(reversed.begin(), reversed.end());
//
//    cout << "Исходная строка: " << str << endl;
//    cout << "Развернутая строка: " << reversed << endl;
//
//    return 0;
//}



/// 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//string reverseString(string str) {
//    if (str.empty()) {
//        return str;
//    } else {
//        return reverseString(str.substr(1)) + str[0];
//    }
//}
//
//int main() {
//    string str = "Привет, мир!";
//    string reversed = reverseString(str);
//
//    cout << "Исходная строка: " << str << endl;
//    cout << "Развернутая строка: " << reversed << endl;
//
//    return 0;
//}


/// 4
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//int main() {
//    std::string str = "C++ is awesome!";
//
//    // Использование итератора для вывода символов в обратном порядке
//    std::for_each(str.rbegin(), str.rend(), [](char c) {
//        std::cout << c;
//        });
//    // типо начало справа конец справа
//
//    std::cout << std::endl;
//
//    return 0;
//}