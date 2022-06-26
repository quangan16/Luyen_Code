#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void intConvert(string n){
    for(int i = 0; i<n.length();i++){
        
    }
}



int process(int n){
    int converseNum = 0;
    while(n> 0){
        converseNum = (converseNum + n%10)*10;
        n/=10;
    }
    return converseNum/10;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>> n;
    cout<<process(n);
    return 0;
}