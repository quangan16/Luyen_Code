#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void input(list<int> &l, int n){
int temp;
for(int i = 0; i<n;i++){
    cin>>temp;
    l.push_back(temp);
    }
}

void checkNum(list<int> &l, int n, int x){
    bool check = false;
    for(list<int>::iterator it = l.begin(); it!= l.end();it++){
        if(*it==x){
            check= true;
            break;
        }
    }
    if(check == true){
        cout<<"YES";
    }
    else cout<<"NO";
   
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n, x;
cin>>n>>x;
list<int> node;
input(node,n);
checkNum(node,  n, x);
return 0;
}