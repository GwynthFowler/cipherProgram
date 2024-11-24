#include "encryption type/Cipher/Caesar/caeser.h"

int main(void) {
	std::cout << "please enter your the sentence you want to encrypt: \n";
	std::string Test;
	std::cin >> Test;
	Caesar C(Test, 5);
}