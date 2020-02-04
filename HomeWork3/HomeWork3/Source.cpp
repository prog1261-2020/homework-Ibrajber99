#include <vector>
#include <algorithm>

std::vector<int> bsort(std::vector<int>& v)
{
	std::vector<int>tmp;
	bool flag = true;

	while (flag) {
		flag = false;
		for (int i{ 0 }; i < v.size() - 1; i++) {
			if (v[i] > v[i + 1]) {
				std::swap(v[i], v[i + 1]);
				flag = true;
			}
		}
	}
	tmp = v;
	return tmp;
}

std::vector<int> SelectionSort(std::vector<int>& vec)
{
	int n = vec.size();
	while (n > 0) {
		for (int i{ 0 }; i < n; i++) {
			auto minEl = std::min_element(vec.begin(), vec.begin() + n);
			if (vec.at(i) == *minEl) {
				vec.emplace_back(*minEl);
				vec.erase(vec.begin() + i);
				n--;
			}
		}
	}
	return vec;
}

