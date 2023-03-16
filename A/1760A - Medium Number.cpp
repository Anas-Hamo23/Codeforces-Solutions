#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int a, b, c, z;
		cin >> a >> b >> c;
		z = (a + b + c) -( max(a,max(b,c)) + min(a,min(b,c)));
		cout << z << endl;
	}
	return 0;
}