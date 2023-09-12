#include "Phonebook.hpp"
#include <string>

static int resolveOptions(std::string &reference);

Phonebook::Phonebook()
{
	Phonebook::index = 0;
}

Contact Phonebook::askContactInfo() {
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;

	std::cout << "First name: ";
  std::getline(std::cin, firstName, '\n');

	std::cout << "Last name: ";
  std::getline(std::cin, lastName, '\n');

	std::cout << "Nickname: ";
  std::getline(std::cin, nickname, '\n');

	std::cout << "phoneNumber: ";
  std::getline(std::cin, phoneNumber, '\n');

	Contact contact(firstName, lastName, nickname, phoneNumber);
	return (contact);
}

void Phonebook::addContact(Contact contact) {
	this->_contacts[this->index] = contact;

	if (this->index < 7)
		this->index++;
}

std::string Phonebook::askContactName() {
	std::string firstName;

	std::cout << "First name: ";
  std::getline(std::cin, firstName, '\n');

	return (firstName);
}

void Phonebook::searchContact(std::string name) {
  for (int index = 0; index < this->index; index++) {
    std::string actualName = this->_contacts[index].getFirstName();
    if (actualName.compare(name) == 0)
      return (_contacts[index].present(std::to_string(index)));
  }

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
			this->addContact(this->askContactInfo());
      break;
		case SEARCH:
			std::cout << "choose: SEARCH" << std::endl;
      this->searchContact(this->askContactName());
			break;
		case EXIT:
			std::cout << "choose: EXIT" << std::endl;
      exit(0);
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

