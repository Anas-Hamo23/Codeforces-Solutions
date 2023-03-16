//github : Anas-Hamo23
#include<iostream>
using namespace std;
int main() {
	int x, y, count = 0;
	cin >> x >> y;
	while (x <= y) {
		x *= 3;
		y *= 2;
		count++;
	}
	cout << count << endl;
	return 0;
}