#include <bits/stdc++.h>

using namespace std;

void f(vector<int> &v, int s, int n) {
    int sum = 0;
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());

    int d1 = (s-mini >= 0) ? s-mini : 0;
    int d2 = (maxi-s >= 0) ? maxi-s : 0;

    if(d1 < d2) {
        sum += 2*(d1);
        sum += 1*(d2);
    } else {
        sum += 2*(d2);
        sum += 1*(d1);
    }

    cout<<sum<<endl;
}

int main() {
    int totalTestCases;
    cin>>totalTestCases;

    for(int i=0; i<totalTestCases; i++) {
        int n, s;
        vector<int> v;

        cin>>n;
        cin>>s;
        v.resize(n);

        for(int i=0; i<n; i++) cin>>v[i];

        f(v, s, n);
    }

    return 0;
}