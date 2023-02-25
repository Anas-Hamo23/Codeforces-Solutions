#include<iostream>
using namespace std; 
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n;i++) {
		int m, a = 0, b = 0;
		cin >> m;
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			if (x % 2 != j % 2) {
				if (j % 2 == 0) {
					a++;
				}
				else {
					b++;
				}
			}	
		}
		if (a != b) {
			cout << -1 << endl;
		}
		else {
			cout << a << endl;
		}
	}
	return 0;
}