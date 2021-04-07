#include <bits/stdc++.h>
using namespace std;

int writeSolution(vector<vector<int>> arr);

int writeSolution(vector<vector<int>> arr , int n) {
	// int n = (int)arr.size();
	int count = 0;
	int ones = 0;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			vector<int> temp = arr[i];
			if(temp[j] == 1) {
				ones++;
			}
		}

		if(ones > 1)
			count++;
		ones = 0;
	}

	return count;
}

int main(int argc, char const *argv[]) {
	int n;
	cin >> n;
	int temp;
	vector<vector<int>> arr;
	
	for(int i = 0; i < n; i++) {
		vector<int> v(3);

		for(int j = 0; j < 3; j++) {
			cin >> temp;
			v[j] = temp;
		}
		arr.push_back(v);
	}

	cout << writeSolution(arr , n) << endl;
	return 0;
}