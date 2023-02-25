#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
void an(int q) {
	for (int r = 0; r < q; r++) {
		cout << 1 << " ";
	}
}
void ans(int q) {
	for (int p = 0; p < q - 2; p++) {
		cout << 2 << " ";
	}
}
void anas() {
	int q; cin >> q;
	if (q % 2 == 1) {
		an(q);
	}
	else {
		ans(q);
		cout << 3 << " " << 1;
	}cout << endl;
}
int main() {
	int x;
	cin >> x;
	for (int j = 0; j < x; j++) {
		anas();
	}
	return 0;
}
