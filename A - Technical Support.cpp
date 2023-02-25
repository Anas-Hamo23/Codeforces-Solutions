#include<iostream>
using namespace std;
int main() {
	string a;
	//long long b, z;
	int x, y,b,z;
	bool k;
	cin >> b;
	for (int i = 0; i < b; i++) {
		cin >> z >> a;
		x = y = 0;
		if (a[a.length() - 1] != 'A') {
			cout << "No" << endl;
		}
		else {
			k = false;
			for (int j = a.length()-1; j >= 0; j--) {
				if (a[j] == 'Q') {
					x++;
				}
				else {
					y++;
				}
				if (x > y) {
					cout << "No" << endl;
					k = true;
					break;
				}
			}
			if (!k) {
				cout << "Yes" << endl;
			}
		}
	}
	
	return 0;
}