#include<iostream>
#define mod 998244353ll

using namespace std;

long long Sum(long long n){
    return(long long) ((n*(n +1))/2ll) % mod;
}   

long long Process(long long a, long long b, long long c){
    long long res = 0;
    res += Sum(a);
    res *= Sum(b), res %= mod;
    res *= Sum(c), res %= mod;

    return (long long) res;

}

int main(){
    int T;
    cin>>T;
    int a, b, c;
    while(T--){
         cin>>a>>b>>c;
        cout<<Process(a, b, c)<<endl;
    }
   
}

