#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int a1, a2, a3, a4, x = 0;
	cin >> a1 >> a2 >> a3 >> a4;
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			x += a1;
		}
		else if (s[i] == '2') {
			x += a2;
		}
		else if (s[i] == '3') {
			x += a3;
		}
		else if (s[i] == '4') {
			x += a4;
		}
	}cout << x;
	return 0;
}
