#ifndef DATA_HPP
#define DATA_HPP

#include <cstdint>
#include <iostream>

struct Data {
	int i;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t ptr);

#endif
