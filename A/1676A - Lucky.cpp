#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		int sum1 = 0, sum2 = 0;
		string a; cin >> a;
		for (int i = 0; i < 6; i++) {
			if (i < 3) {
				sum1 += a[i];
			}
			else {
				sum2 += a[i];
			}
		}
		if (sum1 != sum2) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
