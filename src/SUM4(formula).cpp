#include <bits/stdc++.h>

using namespace std;

double process(int n){
    return (double)2*(1 - (double)1/(n+1));
}

int main()
{
    int T;
    int n;
    cin>>T;
    while(T--){
        cin>>n;
        cout<<fixed<<setprecision(8)<<process(n);
        cout<<endl;
    }
    
    
    return 0;
}