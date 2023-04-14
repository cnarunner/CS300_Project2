#include <algorithm>
#include <climits>
#include <iostream>
#include <string> // atoi
#include <time.h>

int userInput = 0;

int printMenu() {
	std::cout << "1: Load course data" << std::endl;
	std::cout << "2: Print course list" << std::endl;
	std::cout << "3: Print single course" << std::endl;
	std::cout << "9: Exit Program" << std::endl;
	std::cin >> userInput;

	return userInput;
}

int printDataTypeMenu() {
	std::cout << "Which data type?" << std::endl;
	std::cout << "1: Vector" << std::endl;
	std::cout << "2: Hash Table" << std::endl;
	std::cout << "3: Binary Search Tree" << std::endl;
	std::cin >> userInput;
	
	return userInput;
}

int main(int argc, char* argv[]) {
	int choice = 0;
	
	clock_t ticks;

	while (choice != 9) {
		choice = printMenu();
		printDataTypeMenu();
		switch (choice) {
			case 1:

				int dataChoice = 0;
				switch (dataChoice) {}

				ticks = clock();
		}
	}
	return 0;
}