#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Input(vector<int> &v, int m, int n){
    for(int i = 0 ; i < m * n; i++){
        cin>>v[i];
    }
}

void Output(const vector<int> &v, int m, int n){
    for(int i = 0 ; i < m * n; i++){
        if(i % n == 0 && i > 0){
            cout<<endl;
        }
        cout<<v[i]<<" ";
    }
}

void Process(vector<int> &v,int n, int x){
    vector<int> temp;
    vector<int> ids;
    v.shrink_to_fit();
    for(int i = 0 ; i < v.size(); i++){
        if((i + n) / n == x){
            temp.push_back(v[i]);
            ids.push_back(i);
        }
    }
    std::sort(temp.begin(), temp.end());
    int l = 0;
    for(auto i : ids){
        v[i] = temp[l++];
    }
}

int main(){
    int m, n, i;
    cin>>m>>n>>i;
    std::vector<int> v(m * n);
    Input(v, m, n);
    Process(v, n, i);
    Output(v, m, n);
}