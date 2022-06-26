#include <bits/stdc++.h>

using namespace std;

void input(int *a){
    for(int i = 0; i<10; i++){
        cin>>a[i];
    }
}

void process(int *a, int x){
    bool check = 0;

    for(int i = 0; i<10;i++){
        if(a[i] == x){
            cout<<i+1<<" ";
            check = 1;
        }
    }
    if(!check){
        cout<<"-1";
    }    
}
int main()
{
    
    ios_base::sync_with_stdio(0);  
    cin.tie(0);
    cout.tie(0);
    int x;
    int a[10];
    input(a);
    cin>>x;
    process(a, x);
    return 0;
}