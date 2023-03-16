#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long anas,x=0,count=0;
	cin >> anas;
	while (anas--) {
		long long temp;
		cin >> temp;
		if (temp == -1) {
			if (!x) count++;
			else x--;
		}
		else x += temp;
	}
	cout << count << endl;
	return 0;
}