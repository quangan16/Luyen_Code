#include<iostream>
#include<set>
#include<vector>
using namespace std;

void Input(vector<int> &v, int n){
    v.clear();
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}
size_t Process(const vector<int> &v){
    set<int> s;
    for(auto i : v){
        s.emplace(i);
    }
    return s.size();
}

int main(){
    int T;
    cin>>T;
    int n;
    vector<int> v;
    while(T--){
        cin>>n;
        Input(v, n);
        cout<<Process(v);
    }
   
}