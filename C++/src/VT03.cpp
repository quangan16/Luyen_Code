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

void findIndexMax(list<int> &l, int n){
    int pos;

    list<int>::iterator it2 = l.begin();
    int max = *it2;
    for(list<int>::iterator it = l.begin(); it!= l.end();it++){
        if(*it>=max){
            max = *it;
            pos = distance(l.begin(), it);
        }
    }
    cout<<pos;
   
}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
list<int> node;
input(node,n);
findIndexMax(node,  n);
return 0;
}