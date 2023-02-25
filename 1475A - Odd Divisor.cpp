#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		long long n;
		cin >> n;
		if (n & (n - 1)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}