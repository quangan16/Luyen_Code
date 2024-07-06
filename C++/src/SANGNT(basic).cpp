#include <bits/stdc++.h>

using namespace std;

bool primeCheck(int n){
    if(n == 2 || n == 3){
        return 1;
    }
    else{
        for(int i = 2; i<=sqrt(n);i++){
            if( n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i = 2; i<=n;i++){
        if(primeCheck(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}