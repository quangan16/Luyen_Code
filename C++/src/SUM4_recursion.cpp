#include <bits/stdc++.h>

using namespace std;

long long contiSum(int n){
    long long sum = 0;
    for(int i = n;i>0;i--){
        sum += i;
    }
    return sum;
}

double process(int n){
    if(n == 1){
        return 1;
    }else{
        return (double)1/contiSum(n) + (double)process(n-1);
    }
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