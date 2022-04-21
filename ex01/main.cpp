
#include "iter.hpp"
#include <iostream>

void addone(int &a) {
	a++;
}

void print(int &a) {
	std::cout << a << std::endl;
}

int main() {
	int arr[3] = {1, 3, 5};

	iter(arr, 3, addone);
	iter(arr, 3, print);
}
