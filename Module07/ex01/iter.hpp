#ifndef ITER_H
#define ITER_H
#include <iostream>
template<typename T>
void iter(T *a, std::size_t size, void (*f)(const T&)) {
	for (std::size_t i = 0; i < size; ++i) {
		f(a[i]);
	}
}
#endif
