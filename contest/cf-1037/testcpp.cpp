#include <bits/stdc++.h>
#define input() ([](){ int n; std::cin >> n; return n; })()

using namespace std;

vector<int> inputV(int n) {
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    return v;
}

vector<vector<int>> inputMat(int m, int n) {
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i=0; i<m; i++) mat[i] = inputV(n);
    return mat;
}

bool Comp(vector<int> &a, vector<int> &b) {
    return a[0]<b[0];
}

void solve() {
    int n = input();
    // int coin = input();

    vector<vector<int>> mat(inputMat(n, 3));
    sort(mat.begin(), mat.end(), Comp);

    for(int i=0; i<n; i++) {
        for(auto el:mat[i]) cout<<el<<" ";
        cout<<endl;
    }
}

int main() {
    solve();
};