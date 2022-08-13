#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void input(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    
}

float average(int *a, int n){
    int sum = 0;
    int dem  = 0;
    int temp = n;
    while(temp--){
        if(a[temp]%2!=0){
            sum += a[temp];
            dem++;
        }
        
    }
    return (float)sum/dem;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    int a[n];
    input(a, n);
    cout<<fixed<<setprecision(4)<< average(a, n)<<endl;
    system("pause");
    return 0;
}