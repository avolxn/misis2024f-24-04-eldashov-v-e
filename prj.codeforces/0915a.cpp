#include <iostream>
#include <vector>

int main() {
	int mmin = 0;
	int k = 0;
	std::vector<int> vedra;
	int kolvo_veder;
	int len_garden;
	int b;
	std::cin >> kolvo_veder >> len_garden;
	for (int a = 0; a < kolvo_veder; ++a) {
		std::cin >> b;
		if (len_garden % b == 0) {
			k = len_garden / b;
		}
		if (mmin == 0) {
			mmin = k;
		}
		else if ((mmin > k)&&(k!=0)) {
			mmin = k;
		}
		k = 0;
	}
	std::cout << mmin;
}
