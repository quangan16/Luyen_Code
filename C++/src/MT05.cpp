#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Input(vector<vector<int>> &v, int m, int n){
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
            cin>>v[i][j];
        }
    }
}

void Output(const vector<vector<int>> &v, int m, int n){
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
          cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


void Process(vector<vector<int>> &v, int m, int x){
    vector<int> temp;
    for(int i = 0 ; i < m; i++){
        temp.push_back(v[i][x - 1]);
    }

    sort(temp.begin(), temp.end());
    for(int i = 0 ; i < m; i++){
        v[i][x-1] = temp[i];
    }

}

int main(){
    int m, n, x;
    cin>>m>>n>>x;
    vector<vector<int>> v(m, vector<int>(n));
    Input(v, m, n);
    Process(v, m, x);
    Output(v,m, n);
}