#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	//int anas;
	//cin >> anas;
	//while (anas--) {
	int n, cnt = 0, i = 1, m = 1;

	cin >> n;

	while (m <= n) {

		m = ((i * i) + i) / 2;

		if (m > n) break;

		n = n - m;

		cnt++;

		i++;
	}

	cout << cnt << endl;
	//}
	return 0;
}
