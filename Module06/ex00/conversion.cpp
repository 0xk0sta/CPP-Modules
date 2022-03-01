#include <iostream>

void convert(std::string const s) {
	std::string special[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	std::string	c = "";
	int			i;
	float		f;
	double		d;

	if (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0])) {
		c = s[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(s[0]) << ".0"<< std::endl;
		return;
	}
	i = std::atoi(s.c_str());
	if (s[s.length() - 1] == 'f') {
		f = std::atof(s.c_str());
		d = static_cast<double>(f);
	}
	else {
		d = std::stod(s);
		f = static_cast<float>(d);
	}
	for (int j = 0; j < 6; ++j) {
		if (s == special[j]) {
			c = "impossible";
			break;
		}
	}
	if (c == "" && std::isprint(i)) {
		c = "'";
		c += static_cast<char>(i);
		c += "'";
	}
	else if (c == "") c = "Non displayable";
	std::cout << "char: " << c << std::endl;
	if (c == "impossible") std::cout << "int: " << "impossible" << std::endl;
	else std::cout << "int: " << i << std::endl;
	if (c == "impossible") {
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else {
		if (c != "impossible") {
			std::cout << "float: " << f << ".0f" << std::endl;
			std::cout << "double: " << d << ".0" << std::endl;
		}
	}
}
