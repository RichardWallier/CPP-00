#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <stdint.h>
#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber);
		std::string getFullName();
    std::string getFirstName();
    std::string getLastName();
		void getAge();
		void present(std::string preText);

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
    std::string _phoneNumber;
};

#endif // !CONTACT_HPP

