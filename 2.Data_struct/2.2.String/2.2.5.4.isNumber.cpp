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
//        std::cout << str1 << " - ��� �����." << std::endl;
//    }
//    else {
//        std::cout << str1 << " - �� �����." << std::endl;
//    }
//
//    if (isNumber(str2)) {
//        std::cout << str2 << " - ��� �����." << std::endl;
//    }
//    else {
//        std::cout << str2 << " - �� �����." << std::endl;
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