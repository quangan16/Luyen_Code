#include <bits/stdc++.h>

using namespace std;

bool triangleCheck(int a, int b, int c){
    if(a+b<=c || a+c<=b || b+c<=a){
        return 0;
    }
    return 1;
}

int main()
{
    double a, b, c;
    cin>>a>> b>> c;
    if(!triangleCheck(a, b, c)){
        cout<<"NO";
    }
    else{
        int p = a+b+c;
        double q = (double)p/2;
        cout<<p<<" ";
        cout<<fixed<<setprecision(2)<<(double) sqrt(q*(double)(q-a)*(double)(q-b)*(double)(q-c));
    }
    cout<<endl;
    return 0;
}