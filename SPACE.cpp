#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int T;
    string s;
    cin >> T;
    while (T--)
    {
        cin.ignore();
        
        getline(cin, s);
        int cnt = 0;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ' ) 
            {
                cnt++;
               
            }
        }
        cout << cnt<< endl;
    }

    return 0;
}