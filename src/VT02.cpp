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

void find_2nd_max(list<int> &l, int n){
    bool check = 0;
    list<int>::iterator it2 = l.begin();
    int max = *it2;
    int smax = INT_MIN;
    for(list<int>::iterator it = l.begin(); it!= l.end();it++){
        if(*it>max){
            max = *it;
        }
    }
    for(list<int>::iterator it = l.begin(); it!= l.end();it++){
        if(*it>smax&&*it != max){
            smax = *it;
            check = 1;
        }
    }
    if(check == 1){
         cout<<smax;
    }
    else cout<<"NOT FOUND";
   
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
find_2nd_max(node,  n);
return 0;
}