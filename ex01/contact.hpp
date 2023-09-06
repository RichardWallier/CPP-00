#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <_types/_uint64_t.h>
#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, uint8_t age, uint64_t phoneNumber);
		std::string GetFullName();
		void getFirstName();
		void getLastName();
		void getAge();
		void present();

	private:
		std::string _firstName;
		std::string _lastName;
		uint8_t _age;
    uint64_t _phoneNumber;
};

#endif // !CONTACT_HPP

