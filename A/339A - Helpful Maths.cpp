//github : Anas-Hamo23
#include<iostream>
#include<string>
using namespace std;
int main() {
	string x;
	cin >> x;
	char m;
	for (int i = 0; i < x.length(); i++)
	{
		for (int y = 0; y < x.length(); y++)
		{
			if (x[i] != '+')
			{
				if (x[i] <= x[y])
				{
					m = x[i];
					x[i] = x[y];
					x[y] = m;
				}

			}
			
		}
	}
	cout << x;
	return 0;
}