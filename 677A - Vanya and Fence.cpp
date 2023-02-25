//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	int x, y, z, a = 0;
	cin >> x >> y;
	for (int i = 0; i < x; i++) {
		cin >> z;
		if (z <= y) {
			a++;
		}
		else {
			a += 2;
		}
	}
	cout << a << endl;
	return 0;
}