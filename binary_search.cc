#include <iostream>
#include <vector>

static void insertion_sort(std::vector<int>& a) {
	for (size_t i = 1; i < a.size(); ++i) {
		int j = i - 1;
		while (a[j] > a[j+1] && j >= 0) {
			std::swap(a[j], a[j+1]);
			--j;
		}
	}
}

static void binary_search(const std::vector<int>& a, int value) {
	int left = 0, right = a.size() - 1;
	if (a[left] == value || a[right] == value) {
		std::cout << "found!" << '\n';
		return ;
	}
	while (left < right) {
		int tst = (left + right + 1) / 2;
		if (a[tst] == value) {
			std::cout << "found!" << '\n';
			return ;
		}
		if (a[tst] < value) {
			left = tst;
		}
		else {
			right = tst;
		}
	}
	std::cout << "not found!" << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::vector<int> a = {2, 3, 5, 1, 0, 2, 5, 20, 12, 523, 23};
	insertion_sort(a);
	std::cout << "Sorted a: ";
	for (auto& i : a) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
	binary_search(a, 3);
}
