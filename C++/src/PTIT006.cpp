#include<iostream>


using namespace std;

int** Process(int n){
    int **a = new int*[n];
    for(int i = 0; i < n; i++) {
        a[i] = new int[n]; 
    }
    int count = 1;
    
    int row1 = 0; 
    int row2 = n-1;
    int col1 = 0;
    int col2 = n-1;
    
    while(row1 <= row2 && col1 <= col2){
        for(int i = col1; i <= col2; i++){
            a[row1][i] = count++;
        }
        row1++;
        for(int i = row1; i <= row2; i++){
            a[i][col2] = count++;
        }
        col2--;
        for(int i = col2; i >=col1; i--){
            a[row2][i] = count++;
        }
        row2--;
        for(int i = row2; i >= row1;i--){ // Fix the loop condition
            a[i][col1] = count++;
        }
        col1++;
    }
    return a;
}
   

int main(){
    int n;
    cin>>n;
    int **a = Process(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // Deallocate memory
    for(int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
}
