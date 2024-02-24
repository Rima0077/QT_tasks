#include <iostream>

int max(int* arr, int size){
	int max = arr[0];
	for(int i = 1; i < size; ++i){
		if(arr[i] > max){
			max = arr[i];
		}	
	}
	return max;
}

int min(int* arr, int size){
	int min = arr[0];
	for(int i = 1; i < size; ++i){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

double average(int* arr, int size){
	double avg = 0;
	for(int i = 0; i < size; ++i){
		avg += arr[i];
	}
	avg /= size;
	return avg;
}

int main()
{
	int size = 4;
	int arr[size];
	std::cout << "Enter array elements: ";
	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

	int maximum = max(arr, size);
	int minimum = min(arr, size);
	double avg = average(arr, size);

	std::cout << "Maximum = " << maximum << std::endl;
	std::cout << "Minimum = " << minimum << std::endl;
	std::cout << "Average = " << avg << std::endl;


	std::string str_1 = "HI";
	std::string str_2 = "THERE !!!";

	std::string res = str_1 + str_2;
	std::cout << res << std::endl;

	std::cout << "Length: " << res.length() << std::endl;

	return 0;
}
