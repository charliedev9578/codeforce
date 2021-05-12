#include <bits/stdc++.h>

#define MODSUB(a , b) ((a) > (b) ? (a) - (b) : (b) - (a))
using namespace std;

int getSteps(vector<vector<int>> arr) {
	int temp_i;
	int temp_j;

	for(int i = 0; i < 5; i++) {
		vector<int> temp = arr[i];
		for(int j = 0; j < 5; j++) {
			if(temp[j] == 1) {
				temp_i = i;
				temp_j = j;
				break;
			}
		}
	}

	return (MODSUB(2 , temp_i) + MODSUB(2 , temp_j));

}

int main(int argc, char const *argv[]) {
	vector<vector<int>> arr(5);

	for(int i = 0; i < 5; i++) {
		vector<int> temp(5);
		int pos;
		for(int j = 0; j < 5; j++) {
			cin >> pos;
			temp[j] = pos;
		}

		arr[i] = temp;
	}

	cout << getSteps(arr) << endl;
	return 0;
}