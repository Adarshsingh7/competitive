#include <iostream>
#include <vector>
#include <string>
#include <type_traits>

using namespace std;

class Input {
public:
    template<typename T>
    T input() {
        T value;
        cin >> value;
        return value;
    }

    template<typename T>
    vector<T> input(int size) {
        vector<T> vec(size);
        for (int i = 0; i < size; ++i)
            vec[i] = input<T>();
        return vec;
    }

    template<typename T>
    vector<vector<T>> input(int rows, int cols) {
        vector<vector<T>> matrix(rows, vector<T>(cols));
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> matrix[i][j];
        return matrix;
    }

    string readLine() {
        string line;
        cin >> ws;
        getline(cin, line);
        return line;
    }

    bool readBool() {
        string s;
        cin >> s;
        return s == "1" || s == "true" || s == "True";
    }
};
