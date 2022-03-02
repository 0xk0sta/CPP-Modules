#ifndef CPP_MODULES_ITER_HPP
#define CPP_MODULES_ITER_HPP
//TODO MAKE MAIN FOR TESTING
template<typename T>
class array {
	public:
		array(void): _array(NULL), _size(0) {}
		array(unsigned int n) : _array(new T[size]), _size(n) {}
		array(array const &src) { *this = src }
		~array() { delete[] this->_array; }
		array&	operator=(const array& src) {
			if (this == src) return *this;
			if (this->_size != src._size) {
				if (this->_array != NULL) delete[] this->_array;
				this->_array = new[src._size];
				this->_size = src._size;
			}
			for (int i = 0; i < this->_size; ++i) {
				this->_array[i] = src._array[i];
			}
			return *this;
		}
		T&		operator[](unsigned int index) {
			if (index >= this->_size || index < 0) throw IndexException;
			else return this->_array[index];
		}
		unsigned int	size(void) { return this->_size; }
		class IndexException : public std::exception {
			public virtual const char *what() const throw() {
				return "Desired index is out of array bounds";
			}
		};
	private:
		T				*_array;
		unsigned int	_size;
};

#endif
 