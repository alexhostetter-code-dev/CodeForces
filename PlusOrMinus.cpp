// https://codeforces.com/problemset/problem/1807/A
// Programming...

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int equations;
    cin >> equations;

    char arr[equations];

    int i;
    for(i = 0; i < equations; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == c)
            arr[i] = '+';
        else
            arr[i] = '-';
    }

    int j;
    for(j = 0; j < equations; ++j)
        cout << arr[j] << "\n";
    
    return 0;
}