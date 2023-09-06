#include "contact.hpp"

Contact::Contact() { }

Contact::Contact(std::string firstName, std::string lastName, uint8_t age, uint64_t phoneNumber) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_age = age;
  this->_phoneNumber = phoneNumber;
}

std::string Contact::GetFullName() {
	return(_firstName + _lastName);
}

void Contact::present() {
	std::cout << this->_firstName << " " << this->_lastName << " " << (unsigned)this->_age << this->_phoneNumber << std::endl;
}

