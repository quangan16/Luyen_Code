#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int res = 0;
    if(b>a){
        res = b - a;
    }
    if(a>b){
        res = a - b;
    }
    cout<<res;
    return 0;
}