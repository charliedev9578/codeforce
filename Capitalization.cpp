#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

void getAns(string str) {
	str[0] = (char)toupper(str[0]);
	cout << str << endl;
}

int main(int argc, char const *argv[]) {
	string str;
	getline(cin , str);

	getAns(str);
	return 0;
}