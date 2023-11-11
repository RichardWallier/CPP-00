#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>

#define ADD 1
#define SEARCH 2
#define EXIT 4

class Phonebook
{
	public:
		Phonebook();
		Contact askContactInfo(void);
		void	addContact(Contact contact);
    std::string askContactName(void);
		void	searchContact(std::string name);
		void	getNewContactInformation();
		int		Execute(std::string command);

	private:
		Contact _contacts[8];
		uint8_t index;
};

#endif // !PHONEBOOK_HPP

