// https://codeforces.com/problemset/problem/282/A
// Programming...
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    int lines;
    cin >> lines;

    int i;
    for(i = 0; i < lines; ++i)
    {
        string op;
        cin >> op;
        if(op[0] == '+' || op[op.length() - 1] == '+')
            ++sum;
        else
            --sum;
    }

    cout << sum << "\n";

    return 0;
}
