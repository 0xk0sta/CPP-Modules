#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span {
	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);
		Span &operator=(Span const &src);
		void	addNumber(int n);
		int		shortestSpan();
		class spanIsFull : public std::exception {
			public: virtual const char* what() const throw();
		};
		class spanIsNotBigEnough : public std::exception {
			public: virtual const char* what() const throw();
		};

private:
		Span(void);
		std::vector <int> _n;
		unsigned int _size;
		typedef std::vector<int>::iterator IT;
};

#endif
