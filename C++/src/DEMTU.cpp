#include <bits/stdc++.h>

using namespace std;

bool checkChar(char c){
    if((c >= 'a'&&c<='z') || (c>='A' && c<= 'Z')){
        return true;
    }
    return false;
}

int main()
{
    
    string s;
    int cnt = 0;
    getline(cin, s);
    
    for(int i= 0; i<=s.length(); i++){
        if(s[i] == ' ' && checkChar(s[i+1])){
            cnt++;
        }
    }
    if(s[0] == ' '){
        cnt--;
    }
   
    cout<<++cnt;
    
    return 0;
}