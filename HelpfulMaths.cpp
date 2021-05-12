#include <bits/stdc++.h>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

void getAns(string str) {
	int size = (int)str.length();
	int oneCount = 0;
	int twoCount = 0;
	int threeCount = 0;
	for(int i = 0; i < size; i = i + 2) {
		if(str[i] == '1') {
			oneCount++;
		}
		else if(str[i] == '2') {
			twoCount++;
		}
		else if(str[i] == '3') {
			threeCount++;
		}
	}

	string temp = "";
	for(int i = 0; i < oneCount; i++) {
		temp.append("1+");
	}
	for(int i = 0; i < twoCount; i++) {
		temp.append("2+");
	}
	for(int i = 0; i < threeCount; i++) {
		temp.append("3+");
	}

	cout << temp.substr(0 , temp.size() - 1) << endl;
}

int main(int argc, char const *argv[]) {
	string str;
	getline(cin , str);

	getAns(str);
	return 0;
}