//#include <iostream>
//#include <vector>
//
//
//int main() {
//    //{
//    //    // —оздание двумерного вектора размером 3x4 и заполнение его значени€ми 0
//    //    std::vector<std::vector<int>> twoDVector(3, std::vector<int>(4, 0));
//
//    //    // ѕроход по двумерному вектору и вывод его содержимого
//    //    for (int i = 0; i < 3; ++i) {
//    //        for (int j = 0; j < 4; ++j) {
//    //            std::cout << twoDVector[i][j] << " ";
//    //        }
//    //        std::cout << "\n";
//    //    }
//    //}
//
//    // —оздание трехмерного вектора размером 2x3x4 и заполнение его значени€ми 0
//    std::vector<std::vector<std::vector<int>>> threeDVector(2, std::vector<std::vector<int>>(3, std::vector<int>(4, 0)));
//
//    // ѕроход по трехмерному вектору и вывод его содержимого
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            for (int k = 0; k < 4; ++k) {
//                std::cout << threeDVector[i][j][k] << " ";
//            }
//            std::cout << "\n";
//        }
//        std::cout << "\n";
//    }
//
//    return 0;
//}