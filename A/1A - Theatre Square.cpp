//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	long long n, m, a, x,y,z;
	cin >> n >> m >> a;
	x = m / a;
	y = n / a;
	if (m % a != 0) {
		++x;
	}
	if(n%a!=0) {
		++y;
	}
z=x*y;
	cout <<z;
	return 0;
}