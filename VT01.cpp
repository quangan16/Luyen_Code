#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void input(vector<int> &v, int n){
    int temp;
    for(int i = 0 ; i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
}

void max( vector<int> &v){
    int max = v[0];
    for(int i = 0; i< v.size();i++ ){
        if(v[i] >= max){
            max = v[i];
        }
    }
    cout << max;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> v;
    input(v, n);
    max(v);
    return 0;
    

}