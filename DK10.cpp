#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int month, year;
    cin>>month>>year;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(!(month>=1 && month<=12)||!(year>0&&year<=10000)){
        cout<<"INVALID";
    }
    else if(month != 2){
        cout<<day[month];
    }else{
        if(year % 400 == 0 || year % 4 ==0 && year % 100 != 0){
            cout<<day[month]+1;
        }
        else{
            cout<<day[month];
        }
    }
    
    return 0;
}