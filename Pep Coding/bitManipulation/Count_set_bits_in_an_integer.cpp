#include<bits/stdc++.h>
using namespace std;


int countSetBit(int n) {

	int count = 0;

	while (n > 0) {
		if ((n & 1) == 1) {
			count++;
		}
		n = n >> 1;
	}

	return count;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("E:/C++ Code/input.txt", "r", stdin);
	freopen("E:/C++ Code/output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << countSetBit(n);


	return 0;
}