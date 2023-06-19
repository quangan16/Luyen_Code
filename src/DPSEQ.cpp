#include <bits/stdc++.h>

using namespace std;

int maxSumValue(int *inputArr, vector<int> &optiArr , int n, int k){
    int sum = 0;
    int opti = -1000;
    int pos = 0;
    // for(int i = 1; i<=n;i++){
    //     if(inputArr[pos]>0){
    //         sum += inputArr[i];
    //         optiArr[i] = sum;
    //         pos++;
    //     }
    
    try
    {
        for(int i = 0; i<n;i+=pos){
            for(int j = i+1; j<=i+k;j++){
                if(sum+inputArr[j]>opti){
                    opti = sum+inputArr[j];
                    pos = j;
                    optiArr[i] = pos;
                }
            }
        sum+=inputArr[optiArr[i]];
    }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return sum;

}

void inputArr(int *a, int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

}

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    vector<int> optiArr(n, 0);
    inputArr(a, n);
    cout<<maxSumValue(a, optiArr, n, k);

    cout<<endl;
    return 0;
}