#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed&	operator=(Fixed const &src) const;
	bool	operator>(Fixed const &src) const;
	bool	operator<(Fixed const &src) const;
	bool	operator<=(Fixed const &src) const;
	bool 	operator>=(Fixed const &src) const;
	bool 	operator==(Fixed const &src) const;
	bool	operator!=(Fixed const &src) const;

	Fixed	operator+(Fixed const &src) const;
	Fixed	operator-(Fixed const &src) const;
	Fixed	operator*(Fixed const &src) const;
	Fixed	operator/(Fixed const &src) const;

	Fixed&	operator++();
	Fixed&	operator--();

	Fixed	operator++();
	Fixed	operator--();

	static			Fixed&	max(Fixed &lhs, Fixed &rhs);
	static			Fixed&	min(Fixed &lhs, Fixed &rhs);
	static	const	Fixed&	max(Fixed const &lhs, Fixed const &rhs);
	static	const	Fixed&	min(Fixed const &lhs, Fixed const &rhs);
	int						getRawBits(void) const;
	void					setRawBits(int const raw);
	float					toFloat(void) const;
	int						toInt(void) const;
private:
	int					_fixed;
	static const int	_fb = 8;
};

std::ostream& operator<<(std::ostream &s, Fixed const &c);
#endif
 