#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	string x, y, z, a; cin >> x >> y >> z;
	a = x + y;
	sort(a.begin(), a.end());
	sort(z.begin(), z.end());
	if (a == z) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
