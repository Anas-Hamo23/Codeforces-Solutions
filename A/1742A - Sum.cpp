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
		int a, b, c;
		cin >> a >> b >> c;
		if ((a + b) == c) {
			cout << "YES" << endl;
		}
		else if ((a + c) == b) {
			cout << "YES" << endl;
		}
		else if ((b + c) == a) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
