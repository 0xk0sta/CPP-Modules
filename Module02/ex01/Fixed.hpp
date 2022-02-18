#ifndef CPP_MODULES_FIXED_HPP
#define CPP_MODULES_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed& operator=(Fixed const &src);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const;
	int 	toInt(void) const;
private:
	int					_fixed;
	static const int	_fb = 8;
};

std::ostream& operator<<(std::ostream &s, Fixed const &c);
#endif //CPP_MODULES_FIXED_HPP
 