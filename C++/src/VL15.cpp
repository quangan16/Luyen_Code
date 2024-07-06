#include <iostream>

using namespace std;

int GCD(int a, int b){
    while(a*b != 0){
        if(a>b){
            a %= b;

        }else{
            b %= a;
        }
    }
    return a+b;
}

void optimizePartition(int a, int b, int temp){
	int c = abs(a), d = abs(b);
    c /= GCD(abs(a), abs(b));
    d /= GCD(abs(a), abs(b));
    
	if(c%d == 0){
	    cout<<temp * (c/d);
    }
    else{
        cout<<temp * c <<" " << d;
    }
  
	
  
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,  b;
    cin>> a>> b;
    int temp = 0;
    if(a*b < 0){
        temp = -1;
    }else{
        temp = 1;
    }


	if(b == 0){
		cout<<"INVALID";
		return 0;
	}
    optimizePartition(a, b, temp);
    return 0;
}