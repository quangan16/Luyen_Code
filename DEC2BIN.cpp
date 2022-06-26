#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    int a[100];
    while(T--){
        long long n;
        cin>>n;
        long long temp = n;
        int bit = 0;
        int i = 0;
        while(temp>0){
            bit = temp%2;
            temp = temp/2;
            a[i] = bit;
            i++;
        }
        reverse(a, a + i);
        for(int j = 0; j<i;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}