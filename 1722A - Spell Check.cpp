#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long anas;
	cin >> anas;
	string n = "Timur";
	sort(n.begin(), n.end());
	while (anas--) {
		int x;
		cin >> x;
		string m;
		cin >> m;
		sort(m.begin(), m.end());
		if (m == n) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}