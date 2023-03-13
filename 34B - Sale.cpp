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
		int n, m, d = 0;
		cin >> n >> m;
		int  x[n];
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}sort(x, x + n);
		for (int i = 0; i < m; i++) {
			if (m > x[i]) {
				d += abs(x[i]);
			}	
		}cout << d;
	return 0;
}