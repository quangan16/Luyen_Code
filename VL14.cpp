#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void GCD(int a, int b){
    while(a*b != 0){
        if(a>b){
            a %= b;

        }else{
            b %= a;
        }
    }
    cout<<a+b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,  b;
    cin>> a>> b;
    GCD(abs(a), abs(b));
    return 0;
}