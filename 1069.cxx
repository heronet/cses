#include <iostream>
#include <string>

int main() {
	std::string input;
	std::cin >> input;

	size_t longest = 1;
	size_t m_longest = 1;

	if (input.size() == 1) {
		std::cout << 1 << std::endl;
		return 0;
	}

	if (input.size() == 2) {
		std::cout << (input[0] == input[1] ? 2 : 1) << std::endl;
		return 0;
	}


	for(size_t i = 1; i != input.size(); ++i) {
		if(input[i] == input[i - 1])
			++longest;
		else {
			longest = 1;
		}
		if(longest > m_longest)
			m_longest = longest;
	}
	std::cout << m_longest << std::endl;
}
