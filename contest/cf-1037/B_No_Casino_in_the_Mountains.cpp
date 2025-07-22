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
    int k = input();
    int peaks = 0;
    
    vector<int>v(inputV(n));

    int i=0;
    while(i < n) {
        int targetDays = k;
        if(v[i]==1) {
            i++;
            continue;
        }
        while(targetDays>0 && i<n) { //check weather we can reach to the target or not
            int day = v[i];
            if(day==1) {
                i++;
                break;
            }

            targetDays--;
            i++;
        }

        if(targetDays==0) {
            peaks++;
            i++;
        }
    }
    cout<<peaks<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}