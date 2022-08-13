#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int  process(int n){
    int sum = 0;
    int a = 0;
    while(sum<=n){
        sum += ++a;
        
    }
    return a-1;
}

int main()
{
    
    int n;
    cin>>n;
    cout<<process(n);
    return 0;
}