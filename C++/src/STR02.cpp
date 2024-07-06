#include<iostream>
#include<cctype>
#include<string>

using namespace std;

void StandardString(string &s){
	if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 'a' - 'A';
	for(int i = 1; i<s.size(); i++){
		if(s[i] >= 'A' && s[i]<= 'Z'){
			s[i] += 'a'- 'A';
		}
		if(s[i-1] == ' ' && s[i] >= 'a' && s[i]<= 'z'){
			s[i] -= 'a' - 'A';
		}
	}
}

int main(){
	int T;
	cin>>T;
	string s;
	cin.ignore();
	while(T--){
		getline(cin, s);
		StandardString(s);
		cout<<s<<endl;
	}
	return 0;
}

