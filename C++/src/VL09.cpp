#include <iostream>
#include <bits/stdc++.h>

using namespace std;


long long exponent(int n, int m){
    long long expo = 1;
    
    for(int i = 1; i<=m;i++){
        expo *= n;
    }
    return expo;
}

long long factorial(int n){
    long long fact = 1;
    for(int i = 2; i<=n;i++){
        fact *= i;
    }
    
    return fact;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long x, n;
    cin>>x>>n;
    double sum = 0;;
    while(n>0){
        sum += (double) exponent(x, n)/factorial(n);
        n--;
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}