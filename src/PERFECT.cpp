#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Input(vector<int> &v, int length){
    for(int i = 0; i< length; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}

int GetSmallestHeightDiff(vector<int> &v){
    int sub = v[1] - v[0];
    for(int i = 1; i < v.size() -1;i++){
        if(sub >( v[i + 1] - v[i])){
            sub = (v[i + 1] - v[i]);
        }
    }
    return sub;
}

int main(){
    int length;
    cin>>length;
    vector<int> v;
    Input(v, length);
    sort(v.begin(), v.end());
    cout<<GetSmallestHeightDiff(v);
}