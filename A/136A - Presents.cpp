#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas, x, a[100];
	cin >> anas;
	for (int i = 1; i <= anas; i++) {
		cin >> x;
		a[x] = i;
	}
	for (int i = 1; i <= anas; i++) {
		cout << a[i] << " ";
	}
	return 0;
}