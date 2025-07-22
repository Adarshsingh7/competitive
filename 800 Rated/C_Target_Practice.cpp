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

int get_score(int i, int j) {
    if(i==0 or j==0 or i==9 or j==9) return 1;
    if(i==1 or j==1 or i==8 or j==8) return 2;
    if(i==2 or j==2 or i==7 or j==7) return 3;
    if(i==3 or j==3 or i==6 or j==6) return 4;
    if(i==4 or j==4 or i==5 or j==5) return 5;
}

void solve() {
    // vector<vector<char>> v(10, vector<char>(10));
    int sum = 0;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            char temp;
            cin>>temp;
            if(temp=='X') sum += get_score(i, j);
        }
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