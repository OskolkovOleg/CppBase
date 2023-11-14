#include <iostream>
using namespace std;

// kwargs именованные аргументы
void show_args(short a = 10, float b = 20, int c = 30) {
	cout << a << " " << b << " " << c << endl;
}


//int main() {
//	show_args();
//	show_args(1);
//	show_args(1, 2);
//	show_args(1, 2, 3);
//	return 0;
//}