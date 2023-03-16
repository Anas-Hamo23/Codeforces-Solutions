#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
#include<bitset>
#include<set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas; cin >> anas;
	while (anas--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		int x = 0;
		for (int i = 0; i < n; i++) {
			if (i < k) {
				x += max(a[i], b[i]);
			}
			else {
				x += a[i];
			}
		}
		cout << x << endl;
	}
	return 0;
}