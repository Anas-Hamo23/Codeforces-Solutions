#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long long n, x, y, z = 0, m = 0, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		m = z = 0;
		for (int j = 0; j < x; j++) {
			cin >> y;
			if (y >= 0) {
				z += y;
			}
			else {
				m += y;
			}
			
		}
		res = z + m;
		cout << abs(res) << endl;
	}
	return 0;
}