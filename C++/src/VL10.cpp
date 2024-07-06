#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    int length;
    cin>>n;
    length = n.length();
    
    if(n[0] == '-'){
        length -= 1;
    }
    cout<<length;
    return 0;
}