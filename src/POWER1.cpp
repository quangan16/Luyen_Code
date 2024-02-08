#include<iostream>
#include<cmath>
#define MOD 1000000007
typedef long long ll;

using namespace std;

ll BinPow(ll a, ll n, ll c){
	ll res = 1;
	while(n != 0){
		//Neu bit cuoi cung cua n la bit 1 
		if(n % 2 == 1){
            res *= a;
			res %= c;
		}
		//Dich phai 1 bit 
		n /= 2;
		//Nhan a voi a
		a *= a;
		a %= c;
	}
	return res;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout <<BinPow(a, b, MOD);
    return 0;
}