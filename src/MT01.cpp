#include <iostream>
#include <string>
#include <array>
#include <vector>

void PrintAsTwoDimensionArray(std::vector<int> a, int n){
	
	for(int i = 0; i<a.size();i++){
		if((i + 1) % n == 0 && i!= a.size()-1){
			std::cout<<a[i]<<" "<<std::endl;
		}else{
			std::cout<<a[i]<<" ";
		}
	}
}

void InputArray(std::vector<int> &a, int arraySize){
	int input;
	while(arraySize--){
		std::cin>>input;
		a.push_back(input);
	}
}

int main()
{
	int m, n;
	std::cin>>m>>n;
	std::vector<int> arr;
	InputArray(arr, m*n);
	PrintAsTwoDimensionArray(arr, n);
	std::cout<<std::endl;
	return 0;
}