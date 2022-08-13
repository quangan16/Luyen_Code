#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a - b;
    a = a - b;

}

void input(int *a, int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

void output(int *a, int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void selectionSort(int *a, int n){
    for(int i = 1; i<n-1;i++){
        for(int j =i ; j<n-1;j++){
            if( a[i]>a[j]){
                swap(a[i], a[j]);

            }
        }
    }
}

int main()
{
    int n;
    cin>> n;
    int a[n];
    input(a, n);
    selectionSort(a, n);
    output(a, n);
    cout<<endl;
    
    return 0;
}