#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int anas, count = 0; cin >> anas;
	while (anas--) {
		string x; cin >> x;
		switch (x[0])
		{
		case 'T':count += 4; break;
		case 'C':count += 6; break;
		case 'O':count += 8; break;
		case 'D':count += 12; break;
		case 'I':count += 20; break;
		default:
			break;
		}
	}cout << count;
	return 0;
}
