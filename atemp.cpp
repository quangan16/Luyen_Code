#include<iostream>
#include<cmath>
#include<vector>
#include<map>

using namespace std;
typedef long long ll;

void Process(ll n,map<ll, ll> &tracker, int &dem){
    
    for(int i = 2; i<= n / 2; i++){
        int index = 0;
        while(n%i == 0){
            
            n/=i;
            index++;
        }
        if(index > 0){
            dem++;
            tracker[i] = index;
        }
    }
    if(n>1){
        dem++;
       tracker[n] = 1;
    }
}

int main(){
    ll n;
    cin>>n;
    map<ll, ll> tracker;
    map<ll, ll>::iterator it;
    int dem = 0;
    Process(n,tracker, dem);
    cout<<dem<<endl;
    for(it = tracker.begin(); it != tracker.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
}