#include <bits/stdc++.h>

#define PI 3.14159265358979323846
using namespace std;

double circleArea(int a){
    double circleArea = (double)PI * pow(a, 2);
    return circleArea;
}

double rhombusArea(int a){
    double rhombusArea = (double)2*a*2*a*1/2;
    return rhombusArea;
}

int main()
{
    int a;
    cin>>a;
    double mainArea = (double)rhombusArea(a)/2 + (circleArea(a)/2 - rhombusArea(a)/2);
    cout<<fixed<<setprecision(3)<<mainArea;
    cout<<endl;
    
    return 0;
}
