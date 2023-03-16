//github : Anas-Hamo23
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	 
	long double x, n, z = 0.0, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		z += x;
	}
	y = z / n;
	cout << y << endl;

	return 0;
}