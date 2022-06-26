#include <bits/stdc++.h>

using namespace std;



void input(int *a, int n){
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
}

void output(int *a, int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int process(int *a, int n){
    int minus = 0;
    for(int i = 0; i<n-1;i++){
        for(int j =i +1 ; j<n;j++){
            if( abs(a[i]-a[j])>minus){
                minus = abs(a[i]- a[j]);

            }
        }
    }
    return minus;
}


int main()
{
    int n;
    cin>> n;
    int a[n];
    input(a, n);
    cout<<process(a, n);
    
    cout<<endl;
    
    return 0;
}