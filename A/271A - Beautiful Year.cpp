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
	long long anas;
	cin >> anas;
	while (true) {
		anas += 1;
		int a = anas / 1000;
		int b = anas / 100 % 10;
		int c = anas / 10 % 10;
		int d = anas % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			break;
		}
	}cout << anas << endl;
	return 0;
}