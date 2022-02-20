#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class contact {
	private:
		std::string darkestSecret;
		std::string phoneNumber;
		std::string fName;
		std::string sName;
		std::string nickName;
public:
		int					add(void);
		std::string			getDarkestSecret(void);
		std::string			getPhoneNumber(void);
		std::string			getFName(void);
		std::string 		getSName(void);
		std::string 		getNickname(void);
};

class phoneBook {
	public:
		contact kontact[8];
		void	search(void);
};

#endif
