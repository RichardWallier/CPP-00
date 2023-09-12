#include "Phonebook.hpp"

int main(void) {

  Phonebook phonebook;
  std::string command;
  while (42) {
    if (!std::cin)
      return 1;
    std::cout << "type a command" << std::endl;
    std::cout << "ADD - add contact to phonebook" << std::endl;
    std::cout << "SEARCH - search contact on phonebook" << std::endl;
    std::cout << "EXIT - end the program" << std::endl;
    std::getline(std::cin, command, '\n');
    phonebook.Execute(command);
  }
  return (0);
}
