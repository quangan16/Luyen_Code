#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    string a, b;
    cin>>a>>b;
    string sum = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    //make sure second num is always longer
    if (a.length() < b.length())
        swap(a, b);
    
    int temp = 0;
    //gan string sum voi string co do dai lon nhat 
    int resLength = a.length();
    int sumDigit = 0;
    //cong trong khoang do dai 2 day bang nhau
    for(int i = 0; i < b.length();i++){  
        
            sumDigit = (a[i] - '0') + (b[i] - '0') + temp;
            sum.push_back(sumDigit%10 + '0');
            temp = sumDigit/10;
        
    }
    //them vao so tiep theo thua ra neu con du 1 o truoc
    for(int i = b.length(); i <a.length();i++){
        sumDigit  = (a[i] - '0')  + temp;
        sum.push_back(sumDigit%10 + '0');
        temp = sumDigit/10;
    }
    //them 1 vao dau neu van con du
    if(temp == 1){
        sum.push_back('1');
    }

    
    reverse(sum.begin(), sum.end());
    std::cout<<sum;
    std::cout<<endl;
    return 0;
}

