#include<iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUGDE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n ;
	int num;
	int unique = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		unique = unique ^ num;
	}
	cout << unique;
	return 0;

}