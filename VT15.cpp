#include <bits/stdc++.h>

using namespace std;



void input(vector<int> &v, int n){
    int temp;
    for(int i = 0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
}


int process(vector<int> &v, int n){
    vector<int>::iterator it = v.begin();
    sort(v.begin(), v.end());
    while(it != v.end()){
        if(*it == 0){
            v.erase(it);
        }
        it++;
    }
    
    int multi = max(v[n-3]*v[n-2]*v[n-1],v[0]*v[1]*v[n-1]);
    return multi;
}

int main()
{
    int n;
    cin>> n;
    vector<int> v;
    input(v, n);
    cout<<process(v, n);
    
    cout<<endl;
    
    return 0;
}