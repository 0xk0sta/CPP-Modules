#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class contact {
	private:
		std::string darkestSecret;
		std::string phoneNumber;
	public:
		std::string fName;
		std::string sName;
		std::string nickName;
		int			add(void);
		void 		getDarkestSecret(void);
		void		getPhoneNumber(void);
};

class phoneBook {
	public:
		contact kontact[8];
		void	search(void);
};

#endif
