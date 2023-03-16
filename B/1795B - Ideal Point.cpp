//github : Anas-Hamo23
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		long long n, k, start = 0, end = 0, l, r;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> l >> r;
			if (l == k) {
				start++;
			}
			if (r == k) {
				end++;
			}
		}
		if (start > 0 && end > 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}