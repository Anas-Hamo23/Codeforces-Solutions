#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long int anas, n, sum1, sum2;
	cin >> anas;
	while (anas--)
	{
		cin >> n;
		sum1 = sum2 = 0;
		if (n % 4 != 0) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			for (int i = 2; i <= n; i+=2) {
				cout << i << " "; sum1 += i;
			}
			for (int i = 1; i < n - 2; i += 2) {
				cout << i << " "; sum2 += i;
			}
			cout << sum1 - sum2 << endl;
		}
	}
	return 0;
}