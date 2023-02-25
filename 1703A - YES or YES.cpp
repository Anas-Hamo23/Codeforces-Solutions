#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string x;
	
	for (int i = 0; i < n; i++) {
cin >> x;
		if ((x[0] == 'y' || x[0] == 'Y') && (x[1] == 'e' || x[1] == 'E') && (x[2] == 's' || x[2] == 'S')) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}