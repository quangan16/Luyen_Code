#include<iostream>
#include<string>
using namespace std;

void UpperToLowerString(string &s){
	for(int i = 0; i<s.size();i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 'a' - 'A';
		}
	}
}

int main(){
	string s;
	getline(cin, s);
	UpperToLowerString(s);
	cout<<s;
	return 0;
}