#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repr(i,a,b) for (int i = a; i >= b; i--)
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

vector<int> inputV(int n) {
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    return v;
}


int input() {
    int n;
    cin>>n;
    return n;
}

void solve() {
    int n = input();
    vector<int> a(inputV(n));
    vector<int> b(inputV(n));
    int sum = 0;

    for(int i = 0; i<n; i++) {
        int req = a[i];
        int pre = b[i];

        int mod = ((a[i] - b[i]) >= 0) ? a[i] - b[i] : 0;
        sum+=mod;
    }
    cout<<sum<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}