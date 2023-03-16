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
		int x,y; cin >> x;
		string a; cin >> a;
		sort(a.begin(), a.end());
		y = a[x-1];
		cout << y-96 << endl;
	}
	return 0;
}