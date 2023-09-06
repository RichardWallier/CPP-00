#include "phonebook.hpp"

static int resolveOptions(std::string &reference);

Phonebook::Phonebook()
{
	Phonebook::index = 0;
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
	if (std::strcmp(reference.c_str(), "add") == 0) {
		return (ADD);
	}
	else if (std::strcmp(reference.c_str(), "search") == 0) {
		return (SEARCH);
	}
	else if (std::strcmp(reference.c_str(), "exit") == 0) {
		return (EXIT);
	}
	else
		return (0);
}

