#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	char a[n];
	cin >> a;
	for (int i = 0; i < n; i++) {
		a[i] = tolower(a[i]);
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) {
			count++;
		}
	}
	if (count == 26) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}