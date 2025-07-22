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

vector<string> split(const string& str, char delimiter=' ') {
    vector<string> result;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}

void solve() {
    int n = input();
    string s;
    int cnt = 0;
    cin>>s;    
    vector<string>v(split(s, '#'));

    for(auto el:v) {
        int size = el.size();
        if(size<=2) cnt+=size;
        else {
            cnt=2;
            break;
        }
    }
    cout<<cnt<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}