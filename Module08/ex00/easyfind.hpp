#ifndef CPP_MODULES_EASYFIND_HPP
#define CPP_MODULES_EASYFIND_HPP

#include <iostream>

template<typename T>
typename T::iterator	easyfind(T& haystack, int needle) {
	typename T::iterator tmp = std::find(haystack.begin(), haystack.end(), needle);
	return tmp;
}

#endif
