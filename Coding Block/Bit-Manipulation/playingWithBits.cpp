#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		int count = 0;
		for (int i = a; i <= b; i++) {
			int j = i;
			while (j > 0) {
				count = count + (j & 1);
				j = j >> 1;
			}
		}
		cout << count << endl;
	}
	return 0;
}