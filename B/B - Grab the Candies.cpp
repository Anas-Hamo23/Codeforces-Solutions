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
		int x, count1 = 0, count2 = 0;
		cin >> x;
int a[x];
		for (int i = 0; i < x; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				count2+=a[i];
			}
			else if (a[i] % 2 == 1) {
				count1 += a[i];
			}
		}if (count1 >= count2) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}

	}
	return 0;
}