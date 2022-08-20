#include <bits/stdc++.h>

using namespace std;

int process(int *a, int *b, int n){
    int m = 0;
    
    for(int i = 1; i<n;i++){
        for(int j = 0;j<i;j++){
            if(a[i]>a[j]){
                b[i] = max(b[j]+1, b[i]);
                if(b[i]>=m){
                    m = b[i];
                }
            }
        }
    }
    return m;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    
    int b[n];
    for(int i = 0; i<n;i++){
        b[i] = 1;
    }

    cout<<process(a, b, n);
    cout<<endl;
    return 0;
}