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
    vector<int>v(inputV(n));

    int min_diff = INT_MAX;

    for(int i=1; i<n; i++) {
        if(v[i-1]>v[i]) {
            cout<<0<<endl;
            return;
        }

        min_diff = min(min_diff, v[i]-v[i-1]);
    }
    cout<<min_diff/2+1<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}


/*
-----------> Rough Work <-----------
0 5 9 100
1 6 8 99  // 1 OP
2 7 7 98  // 2 OP
3 8 6 9  // 3 OP

0 5 8 9
1 6 7 8  // 1 OP
2 7 6 7  // 2 OP

*/