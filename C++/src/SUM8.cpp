#include<iostream>
#include<cmath>
#include<iomanip>

#define MAX 1000

using namespace std;

double A[MAX];

double PreProcess(int i, int n){
    if(i == n ){
        return (double)sqrt(i);
    }
    else{
       return (double)sqrt(i + PreProcess(i+1, n));
    }
    A[n] = sqrt(n);
    for(int i = n -1; i>=1; i--){
        A[i] = sqrt(i + A[i+1]);
    }
    
    
}

int main(){
    int T;
    cin>>T;
    int n;
    while(T--){
       cin>>n;
       cout<<fixed<<setprecision(5)<<PreProcess(1, n)<<endl;
    }
}