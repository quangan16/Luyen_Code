#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b;
    char c;
    cin>> a >>c >>b;
    if(c == '+'){
        cout<<fixed<<setprecision(2)<<a+b;
    }
    if(c == '-'){
        cout<<fixed<<setprecision(2)<<a-b;
    }
    if(c == '*'){
        cout<<fixed<<setprecision(2)<<a*b;
    }
    if(c == '/'){
        if(b == 0){
            cout<<"Math Error";
        }else
        cout<<fixed<<setprecision(2)<<a/b;
    }
    return 0;
}