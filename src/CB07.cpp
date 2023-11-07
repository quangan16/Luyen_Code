#include<iostream>
#include<iomanip>
#define PI 3.14

int main(){
    float r;
    std::cin>>r;
    std::cout<<std::fixed<<std::setprecision(3)<<r* 2 * PI<<" "<<r * r * PI;
}
