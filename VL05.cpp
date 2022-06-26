#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int flag = 1;
        for(int i = 1; i<=3*n+1;i++){
            sum += flag*i;
            flag*=-1;
        }
    
    cout<< sum;
}