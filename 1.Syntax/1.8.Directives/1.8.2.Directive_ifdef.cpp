#include <iostream>

//#define SQUARE(A, B) A*B
#define print(X) std::cout << X << std::endl;


int main() {
	int a, b;
	std::cin >> a >> b;
#ifdef SQUARE
	std::cout << SQUARE(a, b);
#else
	print(2 * (a + b))
	
#endif // SQUARE
}