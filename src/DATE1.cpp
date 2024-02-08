#include<iostream>

using namespace std;

bool CheckLeapYear(int year){
   if(year % 100 == 0){
    if(year % 400 == 0){
        return true;
    }
    return false;
   }
   else if(year % 4 == 0){
    return true;
   }
   else{
     return false;
   }
  

}



int main(){
    int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31 , 30, 31};
    int n, y;
    cin>>n>>y;
    if(CheckLeapYear(y)){
        a[1] = 29;
    }
    int temp = 0;
    int tempp = 0;
    int date = -1,month = 1;
    for(int i = 0; temp < n; i++){
        tempp = temp;
        temp +=a[i];
        month = i +1;
    }
    date = a[month -1 ] - ( temp - n) ;
    
    cout<<date << " "<< month;
    

}