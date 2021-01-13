#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n) {

	int ans = 0;;

	while (n > 0) {
		if ((n & 1) == 1) {
			ans++;
		}
		n = n >> 1;
	}

	return ans;
}


bool isBleak(int n) {

	for (int i = 0; i < n; i++) {
		int x = i + countSetBit(i);
		if (n == x) {
			return false;
		}
	}

	return true;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << isBleak(n);

	return 0;
}