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
    int num_positive = 0;
    int num_negative = 0;
    int change = 0;

    for(int i=0; i<n; i++) {
        int temp = input();
        if(temp == 1) num_positive++;
        else num_negative++;
    }

    while(num_negative > num_positive or num_negative & 1) {
        num_negative--;
        num_positive++;
        change++;
    }

    cout<<change<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}