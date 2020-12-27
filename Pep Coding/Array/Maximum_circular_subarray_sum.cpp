#include<bits/stdc++.h>
using namespace std;

int maxCircularSum(int arr[], int n)
{
	if (n == 1)
		return arr[0];

	int total = 0;
	for (int i = 0; i < n; i++) {
		total = total + arr[i];

	}

	int currMax = arr[0], max_so_far = arr[0], currMin = arr[0], min_so_far = arr[0];

	for (int i = 0; i < n; i++) {

		currMax = max(arr[i], currMax + arr[i]);
		max_so_far = max(max_so_far, currMax);


		currMin = min(arr[i], currMin + arr[i]);
		min_so_far = min(currMin, min_so_far);

	}

	if (total == min_so_far) {
		return max_so_far;

	}


	return (total - min_so_far);
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

	cout << maxCircularSum(arr, n);
	return 0;
}