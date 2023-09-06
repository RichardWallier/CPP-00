#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <_types.h>
#include <iostream>

#define ADD 1
#define SEARCH 2
#define EXIT 4

class Phonebook
{
	public:
		Phonebook();
		void	addContact(Contact contact);
		void	getNewContactInformation();
		void	ShowAllContacts();
		int		Execute(std::string command);

	private:
		Contact _contacts[8];
		uint8_t index;
};

#endif // !PHONEBOOK_HPP

