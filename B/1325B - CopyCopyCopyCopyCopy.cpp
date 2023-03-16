//github : Anas-Hamo23
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
	int n, x, h = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		int a[x];h=0;
		for (int j = 0; j < x; j++) {
			cin >> a[j];
		 }
		sort(a, a + x);
		for (int i = 0; i < x; i++) {
			if (a[i] != a[i + 1]) {
				h++;
			}
		}
		cout << h << endl;
	}
	
	
	 

	return 0;
}