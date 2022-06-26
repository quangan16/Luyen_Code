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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,  b;
    cin>> a>> b;
   
    if(b == 0){
        cout<<"INVALID";
        return 0;
    }
    if(a <0 && b < 0){
        a = abs(a);
        b = abs(b);
    }
    if(a >0 && b < 0){
        a *= -1;
        b = abs(b);
    }
    if(a != 0 && a%b == 0){
        cout<<a/b;
    }
    else{
        cout<< a/GCD(abs(a), abs(b))<< " "<< b/GCD(abs(a), abs(b));
    }
    
    
    return 0;
}