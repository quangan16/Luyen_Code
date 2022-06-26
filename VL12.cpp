#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    n = abs(n);
    vector<int> a;
    for(int i = sqrt((n)); i>=1;i--){
        if(n%i == 0){
            a.push_back(i);
        if(i != (int)n/i){
            a.insert(a.begin(),(n/i));
        }
        }
    }
    for(int i: a){
        cout<<i<<" ";
    }
    if(n == 0){
        cout<<"INF";
    }
    return 0;
}