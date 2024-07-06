#include <iostream>
#include <string>
#include <cctype>

int charCount(std::string &s, char c){
	int count = 0;
	for(int i = 0; i<s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		if(s[i] == c || abs(s[i] - c) == 32 && std::isalpha(s[i])){
			count++;
		}
	}
	return count;
}

int main()
{
	std::string s;
	std::getline(std::cin, s);
	int T;
	std::cin>>T;
	char c;
	while(T--){
		std::cin.ignore();
		std::cin>>c;
		std::cout<<charCount(s, c)<<'\n';

	}
	
	return 0;
}