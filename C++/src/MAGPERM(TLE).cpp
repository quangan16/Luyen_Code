#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, k;
    cin>>n >>k;
    int a[n+1];
    int b[n+1] = {0};
    int flag[n+1] = {0};
    for(int i = 1; i<=n;i++){
        a[i] = i;
    }
    
    for(int i = 1;i<=n;i++){
        int check = 0;
        for(int j =1 ; j<=n; j++){
            if(a[i] == a[j]+k && flag[j]==0){
                b[i] = a[j];
                flag[j] =1;
                check = 1;
                break;
            }
            if(a[i] == a[j] -k && flag[j]==0){
                b[i] = a[j];
                flag[j] =1;
                check = 1;
                break;
            }
            
        }
        if(check==0){
                cout<<"-1";
                return 0;
            }
    }
    for(int i = 1;i<=n;i++){
        cout<<b[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}