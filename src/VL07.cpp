#include <bits/stdc++.h>

using namespace std;

unsigned long long giaiThua(int start, int end){
    unsigned long long gt = 1;
    for(long long i = start; i<=end;i++){
        gt *= i;
    }
    return gt;
}



int main()
{
    int n, k;
    cin>>n>>k;
    if (k != n) {
		if (k >= n - k) 
			cout << (double) giaiThua(k+1, n) / giaiThua(1, n-k);
		else 
			cout << (double) giaiThua(n-k+1, n) / giaiThua(1, k);
	}
	else cout << 1;
}