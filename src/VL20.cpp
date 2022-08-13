#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char toUpper(char &c){
    if(c>=97&& c<= 123){
        c -= 32;
    }
    return c;
}

void process(char a, char b){
    for(int i = (a); i<= b;i++){
        cout<<(char) i<<" "; 
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char a, b;
    cin>>a>>b;
    process(toUpper(a), toUpper(b));
    return 0;
}