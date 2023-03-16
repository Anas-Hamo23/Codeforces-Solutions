#include<iostream>
using namespace std;

int main() {
	int x = 0;
	string n;
	cin >> n;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] == 'H' || n[i] == 'Q' || n[i] == '9') {
			x++;
		}
	}
	if (x>0) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	
	return 0;
}