#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas, a, imax=0, imin=0, z;
	cin >> anas;
	cin >> a;
	int maxe = a, mine = a;
	for (int i = 1; i < anas; i++) {
		cin >> a;
		if (a > maxe) {
			maxe = a;
			imax = i;
		}
		if (a <= mine) {
			mine = a;
			imin = i;
		}
	}
	if (imin < imax) {
		cout<<imax + (anas - imin - 1) - 1;
	}
	else {
		cout<<imax + (anas - 1 - imin);
	}
	return 0;
}