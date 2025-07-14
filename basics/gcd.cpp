#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int greater = max(a, b);
	int smaller = min(a, b);

	if(greater==0) return smaller;
	if(smaller==0) return greater;

	return gcd(greater%smaller, smaller);
}

int main () {
	int a = 12;
	int b = 16;
	cout<<"gcd is: "<< gcd(a, b)<<endl;
}
