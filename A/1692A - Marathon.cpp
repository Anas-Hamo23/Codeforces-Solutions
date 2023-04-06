#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas;
	cin >> anas;
	while (anas--) {
		int a, b, c, d, count = 0; 
		cin >> a >> b >> c >> d;
		if (a < b) {
			count++;
		}
		if (a < c) {
			count++;
		}
		if (a < d) {
			count++;
		}
		cout << count << endl;
		 
	}
	return 0;
}
