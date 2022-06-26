#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ptb2(int a, int b, int c){
    if(a == 0){
        if(b == 0 && c ==0){
            cout<<"INF";
        }
        else if( b != 0 && c == 0){
            cout<<fixed<<setprecision(2)<<0.00;
        }
        else if(b ==0 && c != 0){
            cout<<"NO";
        }else {
            cout<<fixed<<setprecision(2)<<(float)-c/b;
        }
    }
    else{
        int delta = b*b - 4 *a* c;
        float res1, res2;
        if(delta<0){
            cout<<"NO";
        }
        else if(delta == 0){
            res1 = (float) -b/(2*a) ;
            res2 = (float) -b/(2*a) ;
                cout<<fixed<<setprecision(2)<<res1;
        }
        else{
            res1 = (float) (-b - sqrt(delta))/(2*a) ;
            res2 = (float) (-b + sqrt(delta))/(2*a) ;
            if(res1<=res2){
                cout<<fixed<<setprecision(2) << res1<< " "<<res2;
            }
           else{
               cout<<fixed<<setprecision(2) << res2<< " "<<res1;
           }
        }
    }
   
}

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    ptb2(a, b, c);
    return 0;
}