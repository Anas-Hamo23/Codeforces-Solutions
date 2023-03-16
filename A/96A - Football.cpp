//github : Anas-Hamo23

 
 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a; int count = 0;
cin >> a;
 
	for (int i = 0; i < a.length()-1; i++)
	{
		if (a[i] == a[i + 1])
		{
			count += 1;
			if (count == 6) {
		
				break;
				
			}
		}
		else
		{
			count = 0;
		}
	}
 
 
	if (count < 6)
		cout << "NO";
	else
		cout << "YES";
 
   return 0;
}