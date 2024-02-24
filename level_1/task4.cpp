#include <iostream>

int sum(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

int divis(int a, int b){
	if(b != 0){
		return a / b;
	} else {
		return 0;
	}
}

int main()
{
	int a;
	int b;
	std::cout << "Please enter the first number: " << std::endl;
	std::cin >> a;
	std::cout << "Please enter the second number: " << std::endl;
	std::cin >> b;
	std::cout << "Addition: " << sum(a, b) << std::endl;
	std::cout << "Subtraction: " << sub(a, b) << std::endl; 
	std::cout << "Multiplication: " << mul(a, b) << std::endl;
	std::cout << "Division: " << divis(a, b) << std::endl;
}	
