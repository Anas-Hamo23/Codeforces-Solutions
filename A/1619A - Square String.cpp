#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas; cin >> anas;
	while (anas--) {
		string x; cin >> x;
		string a = "", b = ""; int count = 0;
		int z = x.length()/2;
		if (x.length() % 2 != 0) {
			cout << "NO" << endl;
		}
		else {
			for (int i = 0, j = z; i < z; i++, j++) {
				if (x[i] == x[j]) {
					count++;
				}
			}
			if (count == z) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
