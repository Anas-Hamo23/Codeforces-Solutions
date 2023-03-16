#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m; 
	int y = 1;
	long long int x = 0;
	for (int i = 0; i < m; i++)
	{
		int z; 
		cin >> z;

		if (z >= y)
			x += z - y;
		else
			x += n - (y - z);
		y = z;
	}
	cout << x << endl;
	return 0;
}