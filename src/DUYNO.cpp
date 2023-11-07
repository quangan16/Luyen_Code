#include <bits/stdc++.h>

using namespace std;


long long firstDigit(long long a)
{
    while (a >= 10)
    {
        a /= 10;
    }
    return a;
}

long long lastDigit(long long a)
{
    return a % 10;
}

void process(long long a)
{
    if (firstDigit(a) == lastDigit(a))
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
     long long b;
    while (cin>>b)
    {
        process(b);
        cout<<endl;
    }

    return 0;
}