#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas; cin >> anas;
	while (anas--) {
		string s; cin >> s;
		if (s == "^") {
			cout << 1 << '\n';
			continue;
		}
		int count = 0;
		if (s[0] == '_')
			count++;
		if (s.back() == '_')
			count++;
		for (int i = 0; i < s.size() - 1; i++) {
			if (s[i] == '_' && s[i + 1] == '_')
				count++;
		}
		cout << count << '\n';
	}
	return 0;
}
