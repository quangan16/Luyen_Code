#include<iostream>
#include<vector>
using namespace std;

void Input( vector<vector<int>> &v,  int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            cin>>v[i][j];
        }
    }
}

int Process(const vector<vector<int>> &v, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j<n; j++){
            if(i == j){
                sum += v[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int  n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    Input(v, n);
    cout<<Process(v,n);

}