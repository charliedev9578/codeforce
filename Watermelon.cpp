#include <bits/stdc++.h>
using namespace std;

void answer(int w);

void answer(int w) {
	if(w % 2 == 0 && w > 2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int main(int argc, char const *argv[]) {
	int w;
	cin >> w;
	answer(w);
	return 0;
}