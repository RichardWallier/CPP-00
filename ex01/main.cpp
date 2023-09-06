#include "phonebook.hpp"

int main(void) {

	Phonebook phonebook;
	std::string command;
	while (42) {
		std::cout << "type a command" << std::endl;
		std::cout << "ADD - add contact to phonebook" << std::endl;
		std::cout << "SEARCH - search contact on phonebook" << std::endl;
		std::cout << "EXIT - end the program" << std::endl;
		std::cin >> command;
		phonebook.Execute(command);

	}
	return (0);
}
