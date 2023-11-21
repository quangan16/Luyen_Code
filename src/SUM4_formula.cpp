#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int i = 0;
    while(i<n){
        cin>>a[i];
        i++;

    }
    int j = 0;
    while(j<n){
        cout<<a[j];
        j++;
        
    }
}