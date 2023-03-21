#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

long long a[200000], b[200000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		int n, q, sum = 0;
		cin >> n >> q;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
			b[i] = b[i - 1];
			b[i] += a[i];
		}
		for (int i = 0; i < q; i++) {
			long long l, r, k;
			cin >> l >> r >> k;
			long long sum = b[n] - (b[r] - b[l - 1]) + k * (r - l + 1);
			if (sum % 2 == 1) {
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}

	}
	return 0;
}
