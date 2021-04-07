#include <bits/stdc++.h>
using namespace std;

int getNumDominos(int m , int n);

int getNumDominos(int m , int n) {
	if(m % 2 == 0) {
		return m * n / 2;
	}
	else {
		return (int)((m - 1) * n / 2) + (int)(n / 2);
	}
}

int main(int argc, char const *argv[]) {
	int m;
	int n;
	cin >> m >> n;
	cout << getNumDominos(m , n) << endl;
	return 0;
}