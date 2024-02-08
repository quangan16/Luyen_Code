#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int res = INT_MIN;

void Input(vector<int> &points,const int &length){
    for(int i = 0; i < length; i++){
        int temp;
        cin>>temp;
        points.push_back(temp);
    }
}

void Output(vector<int> &points, int N){
    for(int i = 0; i <= N; i++){
        cout<<points[i]<<" ";
    }
}

void Process(const vector<int> &points, vector<int> &opti, int K){
    opti[0] = 0;
    opti[1] = points[0];
    for(int i = 1; i<= points.size(); i++){
        for(int j = i -1;  j>= i - K; j-- ){
            if(j>=0){    
                opti[i] = max(points[i -1] + opti[j],  opti[i]); 
              
            }
           
            
        }
       
    }
    
}

int main(){
    int N, K;
    cin>>N>>K;
    vector<int> points;
    vector<int> opti(10005, INT_MIN);
    Input(points, N);
    Process(points,opti, K);
    // Output(opti, N);
    cout<<*max_element(opti.begin(), opti.end());
}