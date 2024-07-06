#include<iostream>
#include<map>

using namespace std;

void Process(string s){
    map<char, int> ma;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <=90){
            if(ma.count(s[i] + 32)>0){
                ma[s[i] + 32]++;
            }else{
                ma.emplace(s[i] + 32, 1);
            }
        }
        else if(isalnum(s[i])){
            if(ma.count(s[i])>0){
                ma[s[i]]++;
            }else{
                ma.emplace(s[i], 1);
            }
        }
    }
    for( auto  i : ma){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){
    string s;
    getline(cin, s);
    Process(s);

}