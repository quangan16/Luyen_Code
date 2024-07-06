#include <iostream>
#include<algorithm>
using namespace std;
int n, rs = 0, C, a[20];
void find(int c, int i)
{
    rs = max(rs, c);
    while (i < n && c + a[i] <= C)
    {
        find(c + a[i], i + 1);
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> C;
    for (int i = 0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    find(0,0);
    cout<<rs;
}