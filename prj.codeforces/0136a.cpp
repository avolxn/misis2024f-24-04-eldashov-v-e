#include <iostream>
#include <vector>


int main() {
	std::vector<int> t;
	std::vector<int> answer;
	int n;
	int p_i;
	std::cin >> n;
	for (int a = 0; a < n; ++a) {
		std::cin >> p_i;
		t.push_back(p_i);
	}
	for (int r = 1; r <= t.size(); ++r) {
		for (int x = 0; x < t.size(); ++x) {
			if (r == t[x]) {
				answer.push_back(x + 1);
			}
		}
	}
	for (int u = 0; u < answer.size(); u++) {
		std::cout << answer[u] << " ";
	}

}
