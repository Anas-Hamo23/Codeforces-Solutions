//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	int n, m, h = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == 1) {
			h++;
		}
	 }
	if (h > 0) {
		cout << "HARD";
	}
	else cout << "EASY";
	return 0;
}