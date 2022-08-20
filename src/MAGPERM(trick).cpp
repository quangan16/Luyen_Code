#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = a; i<=b;i++)

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n+1];
    bool b[n+1];
    
    FOR(i, 1, n){
        b[i] = false;
        a[i] = i;
    }
    if(k == 0){
        FOR(i, 1, n){
            cout<<a[i]<<" ";
        }
    }
    else if(n%2 || k>n/2) {
        cout<<"-1";
        return 0;
    }
    else{
       int i= 1;
		while(1){
			if (b[i]==false && i+k<=n){
				swap(a[i], a[i+k]);
				b[i]= true;
				b[i+k]= true;
			}
			else 
				if (b[i]==true) i++;
				else break;
		}
   
       if(count(b+1, b+1 +n, false)){
        cout<<"-1";
    }
    else{
        FOR(i, 1, n){
        cout<<a[i]<<" ";
    }
    } 
    
        

    }
    
    
    
    cout<<endl;
    return 0;
}