#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> vec;
	for (int i = 1; i <= (1 << 20); i++) {
		if (__builtin_popcount(i) % 2 == 0) {
			vec.push_back(i);
		}
	}
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// print the numbers with even bits
		for (int i = 0; i < n; i++) {
			cout << vec[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
