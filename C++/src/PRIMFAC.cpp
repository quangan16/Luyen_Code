#include<iostream>
#include<map>

using namespace std;

int main(){
   
    long long n;
    cin>>n;
    long long temp = n;
    int cnt = 0;
    int index = 0;
    std::map<long long, long long> m;
    std::map<long long, long long>::iterator it;
    for(long long i = 2; i<=n ;i++){

        while(n && n%i==0){
                n /= i;
                index++;
        }
        if(index){
            cnt++;
            m[i] = index;
            
            index = 0;
        }
            
        }
    cout<<cnt<<endl;
    
    for(it = m.begin();it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
