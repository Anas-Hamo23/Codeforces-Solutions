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
		int x, y, z;
		cin >> x >> y >> z;
		if ((x + y) == z) {
			cout << "+" << endl;
		}
		else if ((x - y) == z) {
			cout << "-" << endl;
		}

	}
	return 0;
}