#include<iostream>
#include<vector>
using namespace std;

vector<int> KMP(const string &s){
    vector<int> KMPTable(s.size());
    for(int i = 1, j = 0; i<s.size(); i++){
        while(j>0 && s[j] != s[i]){
            j = KMPTable[j -1];
        }
        if(s[j] == s[i]){
            j++;
        }
        KMPTable[i] = j;
    }
    
    return KMPTable;
}

int main(){
    string a, b;
    cin>>a>>b;
    string s = b + '#' + a;
    vector<int> kmpTable = KMP(s);
    for(int i = 0; i < kmpTable.size(); i++){
        if(kmpTable[i] == b.size()){
           cout<<i - b.size() -(b.size() - 1)<<endl;
        }
    }
}