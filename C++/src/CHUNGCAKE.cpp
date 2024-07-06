#include<iostream>
#include<string.h>
#include <string>

using namespace std;

class Solution {
public:
    #include <string>

    void firstUniqChar(int n,int m) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j == 3) break;
                cout<<i<<" "<<j <<endl;
            }
            cout<<"the "<< i<<endl;
        }
        
       
    }
};

int main(){
    Solution solution;
    solution.firstUniqChar(2,4);
}