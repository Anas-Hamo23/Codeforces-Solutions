#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		long long a, b, i;
		cin >> a >> b;
		if (a % b == 0) {
			cout << 0 << endl;
		}
		else {
			cout << b - a % b << endl;
		}

	}
	return 0;
}