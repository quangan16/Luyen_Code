#include <bits/stdc++.h>

using namespace std;

 double process(double n){
    if(n==1){
        return (double)1/2;
    }
    else{
        return (double)1/(double)(n*(n+1))+process(n-1);
    }
}

int main()
{
    
    double n;
    cin>>n;
    cout<<fixed<<setprecision(5) <<process(n);
    cout<<endl;
    
    return 0;
}