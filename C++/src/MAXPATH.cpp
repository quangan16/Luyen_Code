#include<iostream>
#include<vector>
#define FOR(i, v, b) for(int i = v; i< b; i++)

using namespace std;

void Output(const vector<vector<int>> &v, int m, int n){
    FOR(i, 0, m) {
        FOR(j, 0, n){
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int Process(vector<vector<int>> &v, int m, int n){
    int res = INT_MIN;
    FOR(j, 1, n) {
    
        FOR(i, 0, m){
            if(i == 0){
                v[i][j] += max(v[i][j-1], v[i+1][j-1]);
            }
            else if(i == m - 1){
               v[i][j] += max(v[i][j-1], v[i -1][j-1]);
            }
            else{
                v[i][j] += max(v[i][j-1],max( v[i+1][j-1], v[i-1][j-1]));
            }
        }
        FOR(i, 0, m)
        res = max(v[i][n-1], res);
        
    }
    return res;
}

int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<int>> v(m, std::vector<int>(n));
    FOR(i, 0, m) FOR(j, 0, n) cin>>v[i][j];
    
    
    cout<<Process(v, m, n)<<endl;
    Output(v, m, n);
}