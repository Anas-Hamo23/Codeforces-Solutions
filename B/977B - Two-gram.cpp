#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
#include<bitset>
#include<set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); 
	int n; cin >> n;
	string s; cin >> s;
	int res = 0;
	string ans;
	for (int i = 0; i < n - 1; ++i) {
		int x = 0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j] == s[i] && s[j + 1] == s[i + 1])
				++x;
		if (res < x) {
			res = x;
			ans = string(1, s[i]) + string(1, s[i + 1]);
		}
	}
	cout << ans << endl;
	return 0;
}