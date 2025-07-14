#include <bits/stdc++.h>
#include <math.h>

class Input {
    int n;
    std::vector<int> vec;
    std::vector<std::vector<int>> mat;

    public:
    Input() {
        std::cin >> n;
        if (n < 0) {
            throw std::invalid_argument("Input 'n' must be a non-negative integer.");
        }
    }

    void matrixInput (int m) {
        mat.resize(n);
        for(int i=0; i<n; i++) {
            mat[i].resize(m);
            for(int j=0; j<m; j++) {
                std::cin>>mat[i][j];
            }
        }
    }

    std::vector<std::vector<int>> getMat() {
        return mat;
    }

    void arrayInput() {

    }

    int getN() const {
        return n;
    }
};

using namespace std;

int main() {
    Input input;
    input.matrixInput(6);
    vector<vector<int>> mat(input.getMat());
    
    
    for(auto v:mat) {
        int l1=v[0], w1=v[1], l2=v[2], w2=v[3], l3=v[4], w3=v[5];

        int areaSum = l1*w1 + l2*w2 + l3*w3;
        float root = pow(areaSum, 0.5);
        cout<<root<<endl;
    } 
}
