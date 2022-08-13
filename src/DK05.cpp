#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long q = sqrt(n);
    if(n == q * q ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}