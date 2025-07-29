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
    vector<int> v(inputV(n));
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        ans[i] = n-v[i]+1;
    }
    
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
