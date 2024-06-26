#include <iostream>
#include "Array.hpp"
#include <cstddef> 

int main() {
	try {
	Array<int> a(10);

	for (std::size_t i = 0; i < a.size(); i++) {
		a[i] = i;
	}

	for (std::size_t i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}

	//simulate error
	a[22] = 10;
	} catch (std::out_of_range& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

    return 0;
}
