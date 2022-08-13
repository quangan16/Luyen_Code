#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
   
    int T;
    ll n;
    cin>>T;
    while(T--){
        cin>>n;
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        cout<<sum<<endl;
    }
    
   

    return 0;
}