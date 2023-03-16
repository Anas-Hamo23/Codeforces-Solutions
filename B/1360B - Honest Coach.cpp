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
		int n;
		cin >> n;
		vector<int> a(n);
		for (int& x : a) {
			cin >> x;
		}
		sort(a.begin(), a.end());
		int z = a[n - 1] - a[0];
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				z = min(z, a[j] - a[i]);
			}
		}
		cout << z << endl;
	}
	return 0;
}