#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k, n, w;
    cin >> k >> n >> w;
 
    int total_cost = k * w * (w + 1) / 2;   // cost of w bananas
    int borrow = max(0, total_cost - n);   // amount he must borrow
 
    cout << borrow;
    return 0;
}
