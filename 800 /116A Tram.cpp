#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0, mx = 0;

    while (n--) {
        int out, in;
        cin >> out >> in;

        cnt += in - out;       // current passengers inside
        if (cnt > mx) mx = cnt;
    }

    cout << mx << endl;
    return 0;
}
