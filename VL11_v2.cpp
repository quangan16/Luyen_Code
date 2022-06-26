#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void eratosthenes(long long a[],long long n){
    for(int i = 2; i<=n;i++){
        if(a[i] == 0){
            long long temp = 2;
            while(i*temp <=n){
                a[i*temp] = 1;
                temp++;
            }
        }

    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    long long a[n+1] = {};
    eratosthenes(a, n);
    if(a[n]== 0 && n>=2){
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}