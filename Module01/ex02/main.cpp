#include <iostream>

int main (void) {
	std::string brainz = "HI THIS IS BRAIN";
	std::string *brainPTR = &brainz;
	std::string &brainREF = brainz;

	std::cout << brainz << " " << brainPTR << " " << brainREF << std::endl;
}