#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long sum(long long n){
    if(n==1){
        return 1;
    }
    else{
        return pow(n, 2)+sum(n-1);
    }
}

int main()
{
    long long n;
    cin>>n;
    cout<<sum(n);
}