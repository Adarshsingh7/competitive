// #include <bits/stdc++.h>
// #define ll long long
// #define MOD 1000000007
// #define all(x) (x).begin(), (x).end()
// #define rep(i,a,b) for (int i = a; i < b; i++)
// #define repr(i,a,b) for (int i = a; i >= b; i--)
// #define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
// #define input() ([](){ int n; std::cin >> n; return n; })()
// using namespace std;

// vector<int> inputV(int n) {
//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];
//     return v;
// }

// vector<vector<int>> inputMat(int m, int n) {
//     vector<vector<int>> mat(m, vector<int>(n));
//     for(int i=0; i<m; i++) mat[i] = inputV(n);
//     return mat;
// }

// bool Comp(vector<int> &a, vector<int> &b) {
//     return a[0]<b[0];
// }

// void solve() {
//     int n = input();
//     int coin = input();

//     vector<vector<int>> mat(inputMat(n, 3));
//     sort(mat.begin(), mat.end(), Comp);

//     for(int i=0; i<n; i++) {
//         int l = mat[i][0];
//         int r = mat[i][2];
//         if(coin<l or coin>r) continue;
//         coin = max(coin, mat[i][1]);
//     }

//     cout<<coin<<endl;
// }

// int32_t main() {
//     fastio();
//     int t = 1;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Casino {
    int l, r, real;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<Casino> casinos(n);
        for (int i = 0; i < n; ++i) {
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        }

        // Sort by l to process in increasing order of requirement
        sort(casinos.begin(), casinos.end(), [](Casino& a, Casino& b) {
            return a.l < b.l;
        });

        int i = 0;
        priority_queue<pair<int, int>> pq; // Max heap: (real, r)

        while (true) {
            // Push all casinos that can be entered with current k
            while (i < n && casinos[i].l <= k) {
                if (k <= casinos[i].r) {
                    pq.emplace(casinos[i].real, casinos[i].r);
                }
                ++i;
            }

            bool moved = false;

            // Pick the best available casino (with max real)
            while (!pq.empty()) {
                auto [real, r] = pq.top();
                pq.pop();
                if (k <= r) {
                    k = real;
                    moved = true;
                    break;
                }
            }

            if (!moved) break; // No more valid move
        }

        cout << k << '\n';
    }

    return 0;
}
