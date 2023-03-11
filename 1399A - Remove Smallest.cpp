#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long anas;
	cin >> anas;
	while (anas--) {
		int n;
		bool x = true;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 1; i < n; i++) {
			x &= (a[i] - a[i - 1] <= 1);
		}
		if (x) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}