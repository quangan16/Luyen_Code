#include <iostream>
#include <string>

namespace Solution
{
	//Solution 1:
	// std::string DecodeCeasar(std::string &s, int k)
	// {
	// 	for(int i = 0; i<s.size();i++){
	// 		if(s[i]>='a' && s[i] <='z'){
	// 			if(s[i] - k < 'a'){
	// 				s[i] = 'z' - (k - (s[i] - 'a')) +1;
					
	// 			}else{
	// 				s[i] -= k;	
	// 			}
				
	// 		}
	// 	}
	// 	return s;
	// }
	
	//Solution 2(from NVNS): https://www.facebook.com/100003824621962/posts/2316998401770958/?d=n
	std::string DecodeCeasar(std::string &s, int k){
		for(int i = 0; i<s.size();i++){
			s[i]-= k;
			if(s[i]<'a'){
				s[i] += 26;
			}
		}
		return s;
	}

	
}

int main()
	{
		std::string s;
		std::getline(std::cin, s);
		int k;
		std::cin >> k;
		std::cout<<Solution::DecodeCeasar(s, k);
		std::cout << std::endl;
		return 0;
	}
