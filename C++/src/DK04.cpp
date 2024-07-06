#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    cin>>n;
    if(n>=0){
        if(n >= (int)n + 0.5){
        cout<<(int)n+1;
        }else{
        cout<<(int)n;
        }
    }
    else{
        if(n >= (int)n - 0.5){
            cout<<(int)n;
        }else{
            cout<<(int)n-1;
        }
    }
    
}