#include<iostream>;
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool possible = true;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (s[i] == s[j] && (j - i) % 2 == 1) {
					possible = false;
					break;
				}
			}
			if (!possible) break;
		}
		if (possible) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
