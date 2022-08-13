#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ptb1(int a, int b){
    
    if(a!=0){
        if(b!=0){
            cout<<fixed<<setprecision(2)<<(float)-b/a;
        }
        else{
            cout<<"INF";
        }
    }
    else{
        if(b == 0){
            cout<<"INF";
        }else{
            cout<<"NO";
        }
       
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
    ptb1(a, b);
    return 0;
}