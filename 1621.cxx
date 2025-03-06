#include <iostream>
#include <set>
#include <vector>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> nums;

	while (n--) {
		int x;
		std::cin >> x;
		nums.push_back(x);	
	}
	
	std::set<int> set(nums.cbegin(), nums.cend());

	std::cout << set.size() << std::endl;
}

