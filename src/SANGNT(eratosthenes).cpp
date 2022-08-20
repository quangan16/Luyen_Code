#include <bits/stdc++.h>

using namespace std;



void eratosthenes(int n, bool *a){
    for(int i = 2; i<=sqrt(n);i++){
        if(a[i] == false){
            //start from i*i because i*(i-1),... bi lap lai voi phan truoc
            for(int j = i*i; j<=n;j+=i){
                a[j] = true;
        }
        }
        
    }
}

int main()
{
    int n;
    cin>>n;
    bool a[n+1] = {};
    eratosthenes(n, a);
    for(int i = 2; i<=n;i++){
        if(a[i] == false){
            cout<<i<<" ";
        }
    }
    
    cout<<endl;
    return 0;
}