#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int process(int n){
    int cnt = 0;
    for(int i = 1; i<=n/2; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    return cnt +1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>> n;
    
    cout<<process(abs(n));
    
    
    return 0;
}