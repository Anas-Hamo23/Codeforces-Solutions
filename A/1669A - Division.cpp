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
		int x; cin >> x;
		if (x >= 1900) {
			cout << "Division " << "1\n";
		}
		else if (x >= 1600 && x <= 1899) {
			cout << "Division " << "2\n";
		}
		else if (x >= 1400 && x <= 1599) {
			cout << "Division " << "3\n";
		}
		else if (x <= 1399) {
			cout << "Division " << "4\n";
		}
	}
	return 0;
}
