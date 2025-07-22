#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(const string& str, char delimiter=' ') {
    vector<string> result;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delimiter)) {
        result.push_back(token);
    }

    return result;
}

int main() {
    string s="...##.#";
    vector<string> s2(splitString(s, '#'));
    for(auto el:s2) cout<<el<<" ";
    return 0;
}