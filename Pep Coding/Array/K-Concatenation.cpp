#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
	int currentSum = 0;
	int max_so_far = INT_MIN;
	for (int i = 0; i < n; i++) {

		currentSum = max(arr[i], currentSum + arr[i]);
		max_so_far = max(currentSum, max_so_far);

	}
	return max_so_far;


}

int main() {
#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int A[n] = {0};
		for (int i = 0; i < n; i++)
			cin >> A[i];
		int B[n * k] = {0};
		for (int j = 0; j < n * k;) {
			for (int i = 0; i < n; i++) {
				B[j] = A[i];
				j++;
			}
		}
		cout << maxSubarraySum(B, n * k) << endl;
	}
	return 0;
}