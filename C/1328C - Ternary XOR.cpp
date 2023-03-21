#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int anas;
	cin >> anas;
	while (anas--) {
		int n;
		string x;
		cin >> n >> x;
		string a(n, '0'), b(n, '0');
		for (int i = 0; i < n; ++i) {
			if (x[i] == '1') {
				a[i] = '1';
				b[i] = '0';
				for (int j = i + 1; j < n; ++j) {
					b[j] = x[j];
				}
				break;
			}
			else {
				a[i] = b[i] = '0' + (x[i] - '0') / 2;
			}
		}
		cout << a << endl << b << endl;
	}
	return 0;
}