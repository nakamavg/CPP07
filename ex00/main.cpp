#include <iostream>
template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
const T& min(const T& a, const T& b) {
    return (b < a) ? b : a;
}

template<typename T>
const T& max(const T& a, const T& b) {
    return (a < b) ? b : a;
}


int main() {
    int a = 42;
    int b = 24;

	std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b); 
    std::cout << "a = " << a << ", b = " << b << std::endl; 
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl; 
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl; 

    std::string c = "Gandalf";
    std::string d = "Saruman";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d); 
    std::cout << "c = " << c << ", d = " << d << std::endl; 
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl; 
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl; 

    return 0;
}
