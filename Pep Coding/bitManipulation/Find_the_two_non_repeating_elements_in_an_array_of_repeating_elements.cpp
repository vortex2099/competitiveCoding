#include<bits/stdc++.h>
using namespace std;

pair<int, int> nonRepeatingElements(int arr[], int n)
{
	int result = 0;
	for (int i = 0; i < n; i++) {
		result = result ^ arr[i];
	}

	int pos = 0;
	int temp = result;

	while ((temp & 1) != 1) {
		pos++;
		temp = temp >> 1;
	}
	int x = 0, y = 0;

	int mask = 1 << pos;

	for (int i = 0; i < n; i++) {
		if ((mask & arr[i]) > 0) {
			x = x ^ arr[i];
		}
	}

	y = result ^ x;


	return make_pair(min(x, y), max(x, y));
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	pair<int, int> p = nonRepeatingElements(arr, n);

	cout << p.first << " " << p.second;






	return 0;
}