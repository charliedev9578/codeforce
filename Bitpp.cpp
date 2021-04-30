#include <bits/stdc++.h>
using namespace std;

int getCount(vector<string> arr) {
	int n = (int)arr.size();
	int count = 0;

	for(int i = 0; i < n; i++) {
		if(arr[i][1] == '+') count++;
		else if(arr[i][1] == '-') count--;
	}

	return count;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	vector<string> arr(n);
	string temp;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getCount(arr) << endl;
	return 0;
}