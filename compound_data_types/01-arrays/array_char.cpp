#include <iostream>

void printString(char arg[], int lenght) {
	for(int i = 0; i < lenght; i++){
		std::cout << arg[i];
	}
	std::cout << "\n";
}

int main() {

	char myName[7] = "Lautaro";

	printString(myName, 7);

	return 0;
}
