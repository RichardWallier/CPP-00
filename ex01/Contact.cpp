#include "Contact.hpp"

Contact::Contact() { }

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
  this->_phoneNumber = phoneNumber;
}

std::string Contact::getFullName() {
	return(_firstName + _lastName);
}

std::string Contact::getFirstName() {
	return(_firstName);
}

void Contact::present(std::string preText) {
  std::string space = "     ";
  std::cout << preText << space << this->_firstName << space << _lastName << space << _nickname<< std::endl;
}

