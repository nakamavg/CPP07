#include "Iter.hpp"

int main()
{

	int intArray[] = { 1, 2, 3, 4, 5 };
	float floatArray[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
	std::string stringArray[] = { "one", "two", "three", "four", "five" };

	std::cout << "intArray:" << std::endl;
	iter(intArray, 5, display<int>);
	std::cout << "floatArray:" << std::endl;
	iter(floatArray, 5, display<float>);
	std::cout << "stringArray:" << std::endl;
	iter(stringArray, 5, display<std::string>);

	return 0;
}