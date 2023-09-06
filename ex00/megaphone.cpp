#include <iostream>

int	str_to_upper(std::string& str);

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	std::string megaphone;
	for (int i = 1; i < argc; i++) {
		megaphone = std::string(argv[i]);
		str_to_upper(megaphone);
		std::cout << megaphone << " ";
		megaphone.clear();
	}
	std::cout << std::endl;
	return (0);
}

int	str_to_upper(std::string& str) {
	if (str.empty()) 
		return (-1);
	for(int i = 0; str[i]; i++) 
		str[i] = std::toupper(str[i]);
	return (0);
}

