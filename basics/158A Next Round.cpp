#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin>>k;
    int ans=0;
    
    int a[10000];
    
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      if(a[i]>=a[k-1] && a[i]>0) ans++;
    }
    cout<<ans;
    return 0;
}
