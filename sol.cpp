#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, x, a, b;
	cin >> n >> x >> a >> b;
	int n1 = x + abs(a - b);
	int n2 = min(n1, n - 1);
	cout << n2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}
