#include <iostream>

int add(int a, int b);

int main() {
	std::cout << "add function: " << add(2, 3) << std::endl;

	return 0;
}

int add(int a, int b){
	return a + b;
}
