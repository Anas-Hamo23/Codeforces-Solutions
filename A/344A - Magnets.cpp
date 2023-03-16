//github : Anas-Hamo23
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int x, y = 1;
	cin >> x;
	int a[x];
	for (int i = 0; i < x; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < x; i++) {
		if ((i + 1) != x) {
			if (a[i] == a[i + 1]) {

			}
			else y++;
		}
	}cout<<y<<endl;

	return 0;
}