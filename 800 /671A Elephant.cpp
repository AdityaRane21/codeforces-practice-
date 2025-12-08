#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    if (n % 5 == 0)
        cout << n / 5 << endl;
    else
        cout << n / 5 + 1 << endl;

    return 0;
}
