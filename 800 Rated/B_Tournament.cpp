#include <bits/stdc++.h>

using namespace std;

class Input {
    int n;

    public:
    Input() {
        std::cin >> n;
        if (n < 0) {
            throw std::invalid_argument("Input 'n' must be a non-negative integer.");
        }
    }

    int getN() const {
        return n;
    }
};

void f() {
    int n, k, j;
    int maxi = INT_MIN; 
    vector<int> v;
    
    cin>>n;
    cin>>j;
    cin>>k;

    v.resize(n);

    for(int i=0; i<n; i++) cin>>v[i], maxi = max(maxi, v[i]);

    int playerJ = v[j-1];



    if(k>=2) cout<<"YES"<<endl;
    else {
        if(maxi==playerJ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main() {
    Input input;
    int numTestCases = input.getN();

    for(int i=0; i<numTestCases; i++) {
        f();
    }
} 
