#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumDivisor(int n){
    int sum = 0;
    for(int i = 1; i<=n/2;i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    return sum;
}

void perfectNumCheck(int n){
    if(n == sumDivisor(n)&& n!= 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    perfectNumCheck(n);
    return 0;
}