#include<iostream>
#include<string>
using namespace std;

int Process(const string &s,const char &c){
    int count = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == c || s[i] == c-32){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    getline(cin, s);
    int T;
    cin>>T;
    char c;
    while(T--){
        cin>>c;
        cout<<Process(s, c)<<endl;
    }
}