#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
void anas() {
	int n,m,k,maxa=0;
	cin >> n>>m>>k;
	for (int i = 0; i < m; i++) {
		int z;
		cin >> z;
		maxa = max(maxa, z);
	}
	if (maxa > (n + k - 1) / k) {
		cout << "NO" << endl;
	}
	else cout << "YES" << endl;
	 
}
int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		anas();
	}
	return 0;
}
