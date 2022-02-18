#ifndef CPP_MODULES_FIXED_HPP
#define CPP_MODULES_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed& operator=(Fixed const &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int					_fixed;
	static const int	_fb;
};

std::ostream& operator<<(std::ostream &s, Fixed const &c);
#endif //CPP_MODULES_FIXED_HPP
 