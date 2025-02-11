#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& a) {
	for (size_t i = 1; i < a.size(); ++i) {
		int j = i - 1;
		while (a[j] < a[j+1] && j >= 0) {
			std::swap(a[j], a[j+1]);
			--j;
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	std::vector<int> a = {2, 3, 2, 3, 2, 52, 2, 5, 0, 2, 3, 23, 25, 5};
	insertion_sort(a);
	for (auto& i : a) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

