#include "bits/stdc++.h"
using namespace std;

long long a[200000], b[200000];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int anas = 1;
	cin >> anas;
	while (anas--) {
		int n, c, ans = 0;
		cin >> n >> c;
		priority_queue<int> q;
		for (int i = 1, x; i <= n; ++i) {
			cin >> x;
			q.push(-x - i);
		}
		while (!q.empty()) {
			int x = -q.top(); q.pop();
			if (x > c) break;
			++ans;
			c -= x;
		}
		cout << ans << "\n";
	}
	return 0;
}
