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
    int n=input();
    vector<int>v(inputV(n));
    vector<int>b;
    vector<int>c;
    int maxi = *max_element(all(v));
    int mini = *min_element(all(v));
    
    // check if map has only one element
    if(mini == maxi) {
        cout<<-1<<endl;
        return;
    }

    sort(all(v));
    
    for(int i=0; i<n; i++) {
        int el = v[i];
        if(maxi == el) {
            c.push_back(el);
        } else {
            b.push_back(v[i]);
        }
    }

    cout<<b.size()<<" "<<c.size()<<endl;
    for(int el:b) cout<<el<<" ";
    cout<<endl;
    for(int el:c) cout<<el<<" ";
    cout<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}