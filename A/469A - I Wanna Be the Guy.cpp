#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas, x, y, a[250],count = 0;
	cin >> anas;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> a[i];
	}
	cin >> y;
	int z = x + y;
	for (int i = x; i < z; i++) {
		cin >> a[i];
	}sort(a, a + z);
	for (int i = 0; i < z; i++) {
		if (a[i] != a[i + 1]) {
			count++;
		}
	}
	if (count == anas) {
		cout << "I become the guy.";
	}
	else {
		cout << "Oh, my keyboard!";
	}
	return 0;
}