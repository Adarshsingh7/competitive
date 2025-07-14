#include <bits/stdc++.h>

using namespace std;

void f(int n) {
    if(n%4==0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
} 

int main() {
    vector<int> v;
    int n;

    cin>>n;
    v.resize(n);

    for(int i=0; i<n; i++) cin>>v[i];

    for(int el:v) f(el);
}