#include<iostream> 
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas, count = 0;
	cin >> anas;
	while (anas--)
	{
		int p, q;
		cin >> p >> q;
		if (p <= (q - 2)) {
			count++;
		}
	}cout << count;
	return 0;
}