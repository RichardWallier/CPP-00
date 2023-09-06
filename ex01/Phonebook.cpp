#include "phonebook.hpp"

static int resolveOptions(std::string &reference);

Phonebook::Phonebook()
{
	Phonebook::index = 0;
}

Contact Phonebook::askContactInfo() {
	std::istringstream firstName;
	std::istringstream lastName;
	std::istringstream age;
	uint64_t _age;
	std::istringstream phoneNumber;
	uint64_t _phoneNumber;

	std::cout << "First name: ";
	std::cin >> firstName;

	std::cout << "Last name: ";
	std::cin >> lastName;

	std::cout << "age: ";
	std::cin >> age;
	age >> _age;

	std::cout << "phoneNumber: ";
	std::cin >> phoneNumber;
	phoneNumber >> _phoneNumber;

	Contact contact(firstName, lastName, _age, _phoneNumber);
	return (contact);
}

void Phonebook::addContact(Contact contact) {
	this->_contacts[this->index] = contact;

	if (this->index < 7)
		this->index++;
}

void Phonebook::ShowAllContacts() {
	for(int j = 0; j <= this->index; j++)
		this->_contacts[j].present();
}

int Phonebook::Execute(std::string command) {
	if (command.empty())
		return (-1);

	//str to lower
	for(int i = 0; command[i]; i++)
		command[i] = std::tolower(command[i]);

	switch (resolveOptions(command)) {
		case ADD:
			std::cout << "choose: ADD" << std::endl;
			this->askContactInfo();
			break;
		case SEARCH:
			std::cout << "choose: SEARCH" << std::endl;
			break;
		case EXIT:
			std::cout << "choose: EXIT" << std::endl;
			break;
	}
	return (0);
}


static int resolveOptions(std::string &reference) {
	if (reference.compare("add") == 0) {
		return (ADD);
	}
	else if (reference.compare("search") == 0) {
		return (SEARCH);
	}
	else if (reference.compare("exit") == 0) {
		return (EXIT);
	}
	else
		return (0);
}

