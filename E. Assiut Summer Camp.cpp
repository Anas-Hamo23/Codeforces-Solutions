//github : Anas-Hamo23
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int anas, hu, at, ka, ez;
	string maxe1, maxe2;
	cin >> anas;
	while (anas--) {
		cin >> hu >> at >> ka >> ez;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (hu > at && hu > ka && hu > ez) {
					maxe1 = "Hussien";
					if (at > ka && at > ez) {
						maxe2 = "Atef";
					}else if (ka > at && ka > ez) {
						maxe2 = "Karemo";
					}else if (ez > ka && ez > at) {
						maxe2 = "Ezzat";
					}
				}else if (at > hu && at > ka && at > ez) {
					maxe1 = "Atef";
					if (hu > ka && hu > ez) {
						maxe2 = "Hussien";
					}
					else if (ka > hu && ka > ez) {
						maxe2 = "Karemo";
					}
					else if (ez > hu && ez > ka) {
						maxe2 = "Ezzat";
					}
				}
				else if (ka > hu && ka > at && ka > ez) {
					maxe1 = "Karemo";
					if (hu > at && hu > ez) {
						maxe2 = "Hussien";
					}
					else if (at > hu && at > ez) {
						maxe2 = "Atef";
					}
					else if (ez > hu && ez > at) {
						maxe2 = "Ezzat";
					}
				}
				else if (ez > hu && ez > ka && ez > at) {
					maxe1 = "Ezzat";
					if (hu > ka && hu > at) {
						maxe2 = "Hussien";
					}
					else if (ka > hu && ka > at) {
						maxe2 = "Karemo";
					}
					else if (at > hu && at > ka) {
						maxe2 = "Atef";
					}
				}
			}
		}cout<<maxe1<<" "<<maxe2<<endl;

	}
	return 0;
}