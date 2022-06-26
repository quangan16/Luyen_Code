#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int sum = 0;
    for(int i = a; i<=b;){
        if(i%2 !=0){
            i++;
        }
        else if(i%2 == 0){
            sum += i;
            i += 2;
        }
    }
    cout<<sum;
    return 0;
}