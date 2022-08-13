#include <bits/stdc++.h>

using namespace std;



void input(int *a, int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}


int process(int *a, int n){
    int multi = a[0]*a[1];
    for(int i = 0; i<n-1;i++){
        for(int j =i +1 ; j<n;j++){
            if( a[i]*a[j]>multi){
                multi = a[i]*a[j];
            }
        }
    }
    return multi;
}


int main()
{
    int n;
    cin>> n;
    int a[n];
    input(a, n);
    cout<<process(a, n);
    
    cout<<endl;
    
    return 0;
}