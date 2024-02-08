#include<iostream>
#include<vector>

using namespace std;

void Input(vector<int> &c, int n){
    for(int i = 0; i < n; i++){
        cin>>c[i];
    }

}
void Output(vector<int> &c){
    for(int i : c){
        cout<<i;
    }

}

void ProcessRecursion(int i, const vector<int> &c, int &res, int &tempSum,  vector<bool> &used, const int &V){
    if(i >= c.size()){
        if(tempSum > res){
            res = tempSum;
        }
        return;
    }
    if(tempSum + c[i] <= V){
        used[i] = true;
        tempSum += c[i];
        ProcessRecursion(i+1, c, res, tempSum, used, V);
        used[i] = false;
        tempSum -= c[i];
    }
    // ProcessRecursion(i+1, c, res, tempSum, used, V);
}

int Process(int i,const vector<int> &c,const int &V){
    int res = 0;
    int tempSum = 0;
    vector<bool> used(c.size(), false);
    ProcessRecursion(i, c, res, tempSum, used, V);
    return res;
}
int main(){
    int n, V;
    cin>>n>>V;
    vector<int> c(n);
    Input(c, n);
    cout<<Process(0, c, V);
}