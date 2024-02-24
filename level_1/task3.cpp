#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Please enter the number: " << std::endl;
	std::cin >> num;

	if(num > 0){
		std::cout << "The number is positive " << std::endl;
	} else if(num < 0){
		std::cout << "The number is negative " << std::endl;
	} else {
		std::cout << "The number is zero " << std::endl;
	}

	int marks = 0;
	std::cout << "Enter the mark: ";
	std::cin >> marks;

	char grades;
	switch(marks / 10) {
		case 10:
		case 9:
			grades = 'A';
			break;
		case 8:
			grades = 'B';
			break;
		case 7:
			grades = 'C';
			break;
		case 6:
			grades = 'D';
			break;
		default:
			grades = 'F';
	}

	std::cout << "Grade: " << grades << std::endl;

	for(int i = 1; i <= 10; ++i){
		std::cout << i << " ";
	}

	std::cout << std::endl;
	
	return 0;
		
	
}
