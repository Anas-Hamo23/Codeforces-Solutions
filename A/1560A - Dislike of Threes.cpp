#include <bits/stdc++.h>

using namespace std;

int main()
{
	int anas;
	cin >> anas;

	while (anas--)
	{
		int k;
		cin >> k;

		for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--k == 0)
			{
				cout << i << '\n';
				break;
			}
		}
	}
}