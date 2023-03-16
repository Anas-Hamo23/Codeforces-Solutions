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
	int anas; cin >> anas;
	while (anas--)
	{
		int n; cin >> n;
		vector<int> v(n + 1, 0);
		int x = -1;
		for (int i = 0; i < n; i++) {
			int y; cin >> y;
			if (++v[y] >= 3) {
				x = y;
			}
		}
		cout << x << endl;
	}
	return 0;
}