//github : Anas-Hmao23
#include<iostream>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		int res = x + y + z;
		if (res >= 2)
			count++;
	}
	cout << count << endl;
	return 0;
}