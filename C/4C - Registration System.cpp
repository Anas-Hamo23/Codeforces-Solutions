#include<iostream>
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
	map<string, int>m, m1;
	while (anas--)
	{
		string n; cin >> n;
		if (m[n] == 0) {
			cout << "OK" << endl;
		}
		else {
			m1[n] += 1;
			cout << n << m1[n] << endl;
		}
		m[n]++;
	}
	return 0;
}