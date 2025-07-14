#include <iostream>
#include <vector>

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
