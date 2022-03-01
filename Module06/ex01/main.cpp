#include <stdint.h>
#include "data.hpp"

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t ptr) {
	return reinterpret_cast<Data*>(ptr);
}

int main() {
	Data *d = new Data;
	uintptr_t ptr;
	Data *after;
	std::cout << "Data before: " << d << std::endl;
	ptr = serialize(d);
	std::cout << "Data serialized: " << ptr << std::endl;
	after = deserialize(ptr);
	std::cout << "Data deserialized: " << after << std::endl;
}
