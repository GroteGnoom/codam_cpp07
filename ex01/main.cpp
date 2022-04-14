
#include "iter.hpp"
#include <iostream>

int addone(int a) {
	return a + 1;
}

int print(int a) {
	std::cout << a << std::endl;
	return a;
}

int main() {
	int arr[3] = {1, 3, 5};

	iter(arr, 3, addone);
	iter(arr, 3, print);
}
