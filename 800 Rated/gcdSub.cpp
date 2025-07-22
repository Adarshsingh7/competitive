#include <iostream>
#include <algorithm>  // for max(), min()
#include <vector>
using namespace std;


class Input {
    int n;
    vector<int> v;

    public:
    Input() {
        cin >> n;
        if (n < 0) {
            throw invalid_argument("Input 'n' must be a non-negative integer.");
        }
        v.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
    }

    int getN() const {
        return n;
    }
    const vector<int>& getV() const {
        return v;
    }
};

// 122690412
void countGCD(int n) {
    if(n&1) {
        // number is odd
        int el = (n-1)/2;
        if(el&1) cout<<el-2<<" "<<el+2<<" "<<1<<endl;
        else cout<<el+1<<" "<<el-1<<" "<<1<<endl;
    } else {
        // number is even
        cout<<n-3<<" "<<2<<" "<<1<<endl; 
    }
}


int main () {
    Input input;
    int n = input.getN();
    const vector<int>& v = input.getV();
    for(auto el:v) {
        countGCD(el);
    }

    return 0;
}