#include <iostream>
#include <string>

void CheckPalindrome(std::string s)
{
	
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[s.size() - i - 1])
		{
			std::cout << "NO"<<std::endl;
			return;
		}
	}
	std::cout << "YES"<<std::endl;
}

int main()
{
	int T;
	std::cin >> T;
	
	while (T--)
	{
		std::cin.ignore();
		std::string s;
		long long k;
		std::getline(std::cin, s);
		std::cin>>k;
		CheckPalindrome(s);
		
		
	}
	std::cout << std::endl;
	return 0;
}