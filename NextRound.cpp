#include <bits/stdc++.h>
using namespace std;

int getWinners(vector<int> arr , int limit);

int getWinners(vector<int> arr , int limit) {
	int count = 0;
	int n = (int)arr.size();

	for(int i = 0; i < n; i++) {
		if(arr[i] >= arr[limit - 1] && arr[i] > 0)
			count++;
		else
			break;
	}

	return count;
}

int main(int argc, char const *argv[]) {
	int n;
	int k;
	cin >> n >> k;

	int temp;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[i] = temp;
	}

	cout << getWinners(arr , k) << endl;
	return 0;
}