#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
void ana(string z1,int m1,int n1,int a1) {
	for (auto i : z1) {
		n1++;
		if (a1 == i) {
			cout << m1 << " ";
		}
		else {
			m1 = n1 - 1;
			a1 = i;
			cout << m1 << " ";
		}
	}
}
void anas() {
	int y; cin >> y; string z; cin >> z;
	char a = z[0]; int m = 1, n = 1;
	ana(z, m, n,a);
	cout << "\n";
}
int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		anas();
	}
	return 0;
}
