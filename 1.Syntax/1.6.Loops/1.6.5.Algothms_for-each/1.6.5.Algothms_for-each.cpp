//template <class InputIt, class UnaryFunction>
//UnaryFunction for_each(InputIt first, InputIt last, UnaryFunction f);

#include <algorithm>
#include <iostream>
#include <vector>

void print_square(int n) {
    std::cout << n * n << " ";
}

int main()
{
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };

    // Использование for_each для вывода квадратов чисел
    std::for_each(numbers.begin(), numbers.end(), print_square);

    std::cout << "\n";

    // Использование лямбда-выражения для удвоения каждого элемента
    std::for_each(numbers.begin(), numbers.end(), [](int& n) { n *= 2; });

    // Вывод измененного вектора
    for (int n : numbers) {
        std::cout << n << " ";
    }
    
    return 0;
}

