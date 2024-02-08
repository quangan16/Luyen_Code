#include<iostream>
#include<vector>
using namespace std;
int N;
vector<int> a;
vector<int> check(10, false);

void Output(){
    for(int i : a){
        if(i > 0)
        cout<<i;
    }
    cout<<endl;
}

void Try(int i){
    for( int j = 1; j <= N; j++){
        if(check[j] == false){
            a[i] = j;
            check[j] = true;
            if(i == N){
                Output();
            }else{
                Try(i+1);
            }
            check[j] = false;
        }
        
    }
}

int main(){
    
    cin>>N;
    a.resize(N+1, 0);
    Try(1);

}