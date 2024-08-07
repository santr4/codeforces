// 282A. Bit++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int X = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            X += 1;
        }
        if (s == "--X" || s == "X--")
        {
            X -= 1;
        }
    }
    cout << X << endl;
    return 0;
}