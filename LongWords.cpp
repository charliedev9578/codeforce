#include <bits/stdc++.h>
#include <string>
using namespace std;

void generateWord(vector<string> arr);

void generateWord(vector<string> arr) {
	int n = (int)arr.size();
	for(int i = 0; i < n; i++) {
		if(arr[i].length() > 10) {
			string temp = arr[i].substr(0 , 1);
			cout << temp.append(to_string(arr[i].length() - 2)).append(arr[i].substr(arr[i].length() - 1 , 1)) << endl;
		}
		else {
			cout << arr[i] << endl;
		}
	}
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

	generateWord(arr);
	return 0;
}