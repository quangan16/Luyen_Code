#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool primeCheck(int n){
    if(n<2){
        return false;
    }
    for(int i = 2; i<= sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(primeCheck(n)){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}