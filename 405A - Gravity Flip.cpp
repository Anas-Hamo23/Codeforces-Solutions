#include<iostream>
#include<algorithm>
using namespace std; 
int main() {
	int count = 0,n;
	cin >> n;
	long long x[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	sort(x, x + n);
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
	return 0;
}