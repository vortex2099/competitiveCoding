// Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number.
// Examples :

// Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
// Ouptut: Sum found between indexes 2 and 4
// Sum of elements between indices
// 2 and 4 is 20 + 3 + 10 = 33

#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int givenSum) {

	int sum = 0, start = 0;
	for (int i = 0; i < n;) {

		if (sum < givenSum) {
			sum = sum + arr[i];
			i++;

		}
		if (sum > givenSum) {
			sum = sum - arr[start];
			start++;
		}

		if (sum == givenSum) {
			cout << start << " " << --i;
			return;
		}


	}
	cout << "not found";
	return;
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
	int givenSum;
	cin >> givenSum;

	subarraySum(arr, n, givenSum);
	return 0;
}