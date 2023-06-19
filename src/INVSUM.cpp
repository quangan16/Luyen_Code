#include<bits/stdc++.h>
#define N 1000000

using namespace std;

double res[1000000] = {0};

void process(){
    for(int i = 1; i<=N; i++){
        res[i] = res[i-1]+(double)1/(2*i-1);
    }
    
}

    



int main(){
    process();
    int T;
    cin>>T;
    int n;
    while(T--){
        cin>>n;
        cout<<fixed<<setprecision(5)<<res[n]<<endl;
    }
    
    system("pause");    
    return 0;
}



























// #include<bits/stdc++.h>

// using namespace std;

// double process(int n){
//     double sum = 0;
//     for(int i= 1; i<=2*n-1; i+=2){
//         sum += (double)1/i;
//     }
//     return sum;
// }

// int main(){
//     int T;
//     cin>>T;
//     int n;
//     while(T--){
//         cin>>n;
//         cout<<fixed<<setprecision(5)<<process(n)<<endl;
//     }
//     return 0;
// }
