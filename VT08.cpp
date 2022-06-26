#include <bits/stdc++.h>

using namespace std;

void input(int *a, int n){
    for(int i = 0; i < n; i++){
        cin>> a[i];
    }
}

void output(int *a,int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void process(int *a, int n){
    int b[n];
    for(int i = 0; i<n; i++){
        if(i%2 != 0){
            if(i == 0) b[i] = a[i]+a[i+1];
            if(i == n-1) b[i] = a[i] + a[n-2];
            if(i != 0 && i != n-1)
            b[i] = a[i] + abs(a[i-1]- a[i+1]);
        
        }
        else {
            b[i] = a[i];
        }
    }
    output(b, n);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    input(a, n);
    process(a, n); 
    

    return 0;
}