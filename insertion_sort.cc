#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& a) {
	for (int i = 1; i < (int)a.size(); ++i) {
		int key = a[i], j = i - 1;
		while (j >= 0 && a[j] < key) { // descenging < ; ascending >
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
}

void insertion_sort(std::vector<int>& a) {
	for (int i = 1; i < (int)a.size(); ++i) {
		int key = a[i], j = i - 1;
		while (j >= 0 && key < a[j]) {
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
}
int main() {
	std::vector<int> a = {23, 12, 1, 0, -100, 235, 235, 259, 2, 10, 50};	
	
	insertion_sort(a);
	for (auto& i : a) {
		std::cout << i << " ";
	}
	std::cout << '\n';
}
