#include <bits/stdc++.h>
using namespace std;

int getAnswer(string a , string b) {
	int size = (int)a.length();

	for(int i = 0; i < size; i++) {
		if(toupper(a[i]) > toupper(b[i])) {
			return 1;
		}
		else if(toupper(a[i]) < toupper(b[i])) {
			return -1;
		}
	}

	return 0;
}

int main(int argc, char const *argv[]) {
	string a;
	string b;
	cin >> a >> b;
	cout << getAnswer(a , b) << endl;
	return 0;
}