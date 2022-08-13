#include <bits/stdc++.h>

using namespace std;

void input(int *a, int n){
    for(int i = 0; i <n; i++){
        cin>> a[i];
    }
}

void process(int *a, int n){
    int x = a[n-1], y = a[0];
    int sum = a[0]+a[n-1];
    for(int i =  1; i<n-1;i++){
        if(a[i]+a[i+1]>sum){
            sum = a[i]+a[i+1];
            x = a[i];
            y = a[i+1];
        }
    }
    cout<<x<<" "<<y;
}

int main()
{
    
    int n;
    cin>>n;
    int a[n];
    input(a, n);
    process(a, n);
    cout<<endl;
    
    return 0;
}