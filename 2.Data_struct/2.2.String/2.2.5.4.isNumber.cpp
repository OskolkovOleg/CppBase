//#include <iostream>
//#include <string>
//#include <locale.h>
//
//bool isNumber(const std::string& str);
//
//int main() {
//    setlocale(LC_ALL, "rus");
//
//    std::string str1 = "123";
//    std::string str2 = "abc";
//
//    if (isNumber(str1)) {
//        std::cout << str1 << " - это число." << std::endl;
//    }
//    else {
//        std::cout << str1 << " - не число." << std::endl;
//    }
//
//    if (isNumber(str2)) {
//        std::cout << str2 << " - это число." << std::endl;
//    }
//    else {
//        std::cout << str2 << " - не число." << std::endl;
//    }
//
//    return 0;
//
//}
//
//
//bool isNumber(const std::string& str) {
//    for (char ch : str) {
//        if (!std::isdigit(ch)) {
//            return false;
//        }
//    }
//    return true;
//}