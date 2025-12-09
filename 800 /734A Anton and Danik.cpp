#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a_count = 0, d_count = 0;

    for (auto i : s) {
        a_count += (i == 'A');
        d_count += (i == 'D');
    }

    if (a_count > d_count)
        cout << "Anton";
    else if (a_count == d_count)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}
