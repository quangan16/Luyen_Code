#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    while(a*b != 0){
        if(a>b){
            a %= b;

        }else{
            b %= a;
        }
    }
    return a+b;
}

int LCM(int a, int b){
    return (a*b)/GCD(a, b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,  b;
    cin>> a>> b;
    cout<< LCM(abs(a), abs(b));
    
    
    return 0;
}