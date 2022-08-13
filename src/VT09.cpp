#include <bits/stdc++.h>


using namespace std;



int checkPrime(int n){
    
    if(n<2){
        return 0;
    }
    for(int i =2; i<= sqrt(n);i++ ){
        if(n%i ==0){
            return 0;
        }
    }
    return 1;
}

void process(int *a, int n){
    sort(a, a+n+1);
    bool b[n] = {0};
    for(int i = 1; i<= n;i++){
        if(checkPrime(a[i])&&a[i] != a[i-1]){
            b[i] = 1;
        }
    }
    for(int i = 1; i<= n; i++){
        if(b[i] == 1){
            cout<<a[i]<<" ";
        }
    }
}

void input(int *a, int n){
    for(int i = 1; i<= n; i++){
        cin>>a[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    input(a, n);
    process(a, n);
    return 0;
}