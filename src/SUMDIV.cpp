#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b){
    if(a%b==0){
        return true;
    }
    return false;
}

int sumDiv(int n, int sum = 0){
    for(int i = 1;i<=sqrt(n);i++){
        if(check(n, i) && i != (n/i)){
            sum = sum + i + (n/i);
        }
        if(check(n, i) && i==(n/i)){
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int T;
    cin>>T;
    int n;
    while(T--){
        cin>>n;
        cout<<sumDiv((n))<<endl;

    }
    cout<<endl;
    return 0;
}