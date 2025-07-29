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
    int n = input(), k=input(), x = input();
    
    if(x!=1) {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0; i<n; i++) {
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }

    if(k==1) {
        cout<<"NO"<<endl;
        return;
    }
    
    if(k==2 and n&1) {
        cout<<"NO"<<endl;
        return;
    }

    if(k>=2) {
        if(n&1) {
            int base = (n/2)-1;
            cout<<"YES"<<endl;
            cout<<base+1<<endl;
            for(int i=0; i<base; i++) cout<<2<<" ";
            cout<<3<<endl;
        } else {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++) cout<<2<<" ";
            cout<<endl;
        }
    }
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}