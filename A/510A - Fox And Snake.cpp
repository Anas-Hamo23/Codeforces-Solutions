#include<iostream>
using namespace std; 
int main() {
	int x, y;
	cin >> x >> y; 
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < y; j++) {
			if (i % 4 == 2) {
				if (j == y - 1) {
					cout << "#";
				}
				else {
					cout << ".";
				}
			}
			else if (i % 4 == 0) {
				if (j == 0) {
					cout << "#";
				}
				else cout << ".";
			}
			else cout << "#";
		}
		cout << endl;
	}
	return 0;
}