#include <iostream>
#include <string>

void InputArray(int** a, int m, int n) {
    for (int i = 0; i < m; i++) {
		a[i] = new int[n];
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
}


void OutputArray(int **a, int m, int n){
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << a[i][j];
        }
    }
	std::cout<<std::endl;
}


int Process(int **a, int m, int n){
	int sum = 0;
	for(int i = 0; i<m ; i++){
		for(int j = 0; j<n; j++){
			if(i % 2 == 1){
				sum += a[i][j];
			}
			else{
				break;
			}
		}
	}
	return sum;
}

int main()
{
	int m, n;
	std::cin>>m>>n;
	int a[m][n];
	
	int **array = new int*[n];
	InputArray(array, m, n);
	std::cout<<Process(array, m, n);
	// OutputArray(array, m, n);
	// OutputArray(a);
	std::cout<<std::endl;
	return 0;
}