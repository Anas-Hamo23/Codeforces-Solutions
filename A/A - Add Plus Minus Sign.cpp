#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
void anas() {
	int y;
	string z,f="";
	cin >> y;
	cin >> z;
	int sum = z[0] - '0';
	for (int i = 1; i < y; i++) {
		if (sum == 0) {
			f += "+";
			sum += z[i] - '0';
		}
		else {
			f += "-";
			sum -= z[i] - '0';
		}
	}
	cout << f << endl;
}
int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		anas();
	}
	return 0;
}
