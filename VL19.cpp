#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void process(int a, int b){
    bool check = 0;
    
    for(int i = b-1; i>a;i--){
        if(i%3==0){
            check++;
            cout<<i<<" ";
        }
    }

    if(!check){
        cout<<"NOT FOUND";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,  b;
    cin>>a>>b;
    process(a,b );
    return 0;
}