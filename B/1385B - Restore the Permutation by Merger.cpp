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
		int x,z; cin >> x;
		map<int, int>m;
		vector<int>v;
		for (int i = 0; i < x*2; i++) {
			cin >> z;
			if (m[z] == 0) {
				v.push_back(z);
			}m[z]++;
		}
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}