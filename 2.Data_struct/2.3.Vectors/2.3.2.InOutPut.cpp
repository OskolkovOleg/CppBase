#include <iostream>
#include <vector>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "rus");

    int size;
    std::cout << "������� ������ �������: ";
    std::cin >> size;

    std::vector<int> vec(size);
    std::cout << "������� �������� ������� ����� ������: ";
    for (int i = 0; i < size; i++) {
        std::cin >> vec[i];
    }

    std::cout << "�������� ������: ";
    for (int i = 0; i < size; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}