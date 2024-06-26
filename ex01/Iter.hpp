#pragma once

# include <iostream>
# include <string>


template <typename T>
void	display( T element ) {
	std::cout << element << std::endl;
}

template <typename T1, typename T2, typename FNC>
void	iter( T1 *array, T2 len, FNC display ) {
	for (T2 i = 0; i < len; i++) {
		display(array[i]);
	}
}