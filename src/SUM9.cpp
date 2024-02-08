#include<iostream>
#include<iomanip>

using namespace std;

double Process(int n){
    if(n == 1){
        return (double)1/ (n + n);
    }
    else{
        return(double) 1/(1 + Process(n-1));
    }
}

int main(){
    int T;
    cin>>T;
    int n;
    while(T--){
        cin>>n;
        cout<<fixed<<setprecision(5)<<Process(n)<<endl;
    }
}