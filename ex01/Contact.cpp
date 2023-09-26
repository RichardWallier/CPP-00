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
  std::string firstNameParse = this->_firstName;
  std::string lastNameParse = this->_lastName;
  std::string nicknameParse = this->_nickname;

  if (preText.length() > 10) {
    preText = preText.substr(0, 9);
    preText = preText.append(1, '.');
  }
  if (this->_firstName.length() > 10) {
    firstNameParse = firstNameParse.substr(0, 9);
    firstNameParse = firstNameParse.append(1, '.');
  }
  if (this->_lastName.length() > 10) {
    lastNameParse= lastNameParse.substr(0, 9);
    lastNameParse = lastNameParse.append(1, '.');
  }
  if (this->_nickname.length() > 10) {
    nicknameParse = nicknameParse.substr(0, 9);
    nicknameParse = nicknameParse.append(1, '.');
  }

  if (preText.length() < 10) {
    unsigned int index = 0;
    while (index < (10 - preText.length()) - 1) {
      preText = preText.append(1, ' ');
    }
  }
  if (firstNameParse.length() < 10) {
    unsigned int index = 0;
    while (index < (10 - firstNameParse.length())) {
      firstNameParse = firstNameParse.append(1, ' ');
    }
  }
  if (lastNameParse.length() < 10) {
    unsigned int index = 0;
    while (index < (10 - lastNameParse.length())) {
      lastNameParse = lastNameParse.append(1, ' ');
    }
  }
  if (nicknameParse.length() < 10) {
    unsigned int index = 0;
    while (index < (10 - nicknameParse.length())) {
      nicknameParse = nicknameParse.append(1, ' ');
    }
  }
  std::cout << preText<< " " << firstNameParse << "  " << lastNameParse << "  " << nicknameParse << std::endl;
}

