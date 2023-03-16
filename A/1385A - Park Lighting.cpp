#include <iostream>

using namespace std;

int main() {
	int t, n, m, x;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		x = (n * m + 1);
		cout << x / 2 << endl;
	}
	return 0;
}