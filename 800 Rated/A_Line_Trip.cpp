#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repr(i,a,b) for (int i = a; i >= b; i--)
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define input() ([](){ int n; std::cin >> n; return n; })()
using namespace std;

vector<int> inputV(int n) {
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    return v;
}

void solve() {
    int n = input();
    int d = input();
    vector<int> v(inputV(n));

    int maxD = 0;
    maxD = v[0];
    for(int i=1; i<n; i++) {
        maxD = max(maxD, abs(v[i-1]-v[i]));
    }

    int lastStation = 2*(d - v[n-1]);
    maxD = max(maxD, lastStation);
    cout<<maxD<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}