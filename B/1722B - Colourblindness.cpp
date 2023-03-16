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
		int x; cin >> x;
		string a, b;
		bool z = true;
		cin >> a >> b;
		for (int i = 0; i < x; i++) {
			if ((a[i] == 'R'||b[i]=='R') && a[i] != b[i]) {
				z = false;
			}
		}
		if (z) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}
	return 0;
}