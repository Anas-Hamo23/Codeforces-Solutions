#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;
void anas() {
	string a, b;
	cin >> a;
	sort(a.begin(), a.end());
	b = a;
	reverse(a.begin(), a.end());
	cout << b + a<<"\n";
}
int main() {
	int x;
	cin >> x;
	for (int j = 0; j < x; j++) {
		anas();
	}
	return 0;
}