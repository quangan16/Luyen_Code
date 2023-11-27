#include<iostream>
#include<cmath>
#include<iomanip>
#define MAX 1000000

using namespace std;

double A[MAX];

void PreProcess(int n){
    A[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        A[i] =(double) sqrt(i + A[i-1]);
    }


}

int main(){
    int T;
    cin>>T;
    int n;
    PreProcess(MAX);
    while(T--){
        cin>>n;
        cout<<fixed<<setprecision(5)<<A[n]<<endl;
    }
   
   
}