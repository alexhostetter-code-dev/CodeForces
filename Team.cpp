// https://codeforces.com/problemset/problem/231/A
// Programming...

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int problems;
    cin >> problems;

    int sum;
    int counter = 0;

    int i;
    for(i = 0; i < problems; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sum = a + b + c;
        if(sum >= 2)
            ++counter;
    }

    printf("%d", counter);
}
