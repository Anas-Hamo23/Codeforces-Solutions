#include <bits/stdc++.h>
using namespace std;
int main() { 
	int anas;
	cin >> anas;
	while (anas--) {
		int a, b;
		cin >> a >> b;
		if (a == b) cout << 0 << endl;
		else cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
	}
	
	return 0;
}