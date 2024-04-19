#include <vector>
#include <iostream>


int main() {
	std::vector<int> myVector = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//��������� �������� ������� �������
	int size = myVector.size();
	std::cout << size << "\n";

	//��������� ������� ������� �������.
	int capacity = myVector.capacity();
	std::cout << capacity << "\n";
	
	//��������� ������� �������.
	size_t newSize = 5;
	myVector.resize(newSize);
	std::cout << myVector.capacity() << " " << myVector.size() << "\n";
	
	//��������� ������� �������.
	size_t newCapacity = 20;
	myVector.reserve(newCapacity);
	std::cout << myVector.capacity() << " " << myVector.size() << "\n";

	for (int element : myVector) {
		std::cout << element << " ";
	}
	std::cout << "\n";

	//���������� ������� ������� �� ��� �������� �������.
	myVector.shrink_to_fit();
	std::cout << myVector.capacity() << " " << myVector.size() << "\n";
	

	return 0;
}