// https://codeforces.com/problemset/problem/50/A
// Programming...
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;

    int board_size = M * N;

    if(board_size % 2 == 1)
        cout << (board_size - 1) / 2 << "\n";
    else
        cout << board_size / 2 << "\n";

    return 0;
}
