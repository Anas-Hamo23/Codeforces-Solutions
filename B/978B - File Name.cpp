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
	int anas, count = 0, count1 = 0; cin >> anas;
	string n; cin >> n;
	for (int i = 0; i < anas; i++) {
		if (n[i] == 'x' && n[i] == n[i + 1]) {
			count++;
			if (count >= 2) {
				count1++;
			}
		}
		else {
			count = 0;
		}
	}cout << count1;
	return 0;
}