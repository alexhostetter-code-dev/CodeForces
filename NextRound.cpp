// https://codeforces.com/problemset/problem/158/A
// Programming...
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int participants, kth;
    cin >> participants >> kth;

    int arr[participants];

    int counter = 0;

    int i;
    for(i = 0; i < participants; ++i) {
        int score;
        cin >> score;
        arr[i] = score;
    }

    int j;
    for(j = 0; j < participants; ++j) {
        if(arr[j] >= arr[kth - 1] && arr[j] > 0)
            ++counter;
    }

    cout << counter << "\n";
    return 0;
}