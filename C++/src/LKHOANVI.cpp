#include <iostream>

using namespace std;
#define MAX 10



int n;
static int a[MAX];
static int check[MAX];
void Output(){
    for(int i : a){
        if(i > 0)
        cout<<i<<" ";
    }
    cout<<endl;
}

void Process(int k){
    for(int i = 1; i <= n; i++){
        if(check[i] == 0){
            a[k] = i;
            check[i] = 1;
            if(k == n){
                Output();
            }
            else{
                Process(k+1);
            }
            check[i] = 0;
        }
    }

}

int main(){
    cin>>n;
    Process(1);
}