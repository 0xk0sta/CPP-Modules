#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Usage ./replace file string1 string2" << std::endl;
		return 0;
	}
	std::ifstream in;
	in.open(argv[1], std::ifstream::in);
	std::string line;
	std::string outFileName(argv[1]);
	std::ofstream outfile;
	outfile.open(outFileName.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	while (std::getline(in, line, '\n').good()) {
		std::string out;
		size_t aux = 0;
		size_t index = 0;
		while (true) {
			index = line.find(std::string(argv[1]));
			if (index == std::string::npos) break;
			out.append(line, aux, index - aux);
			out.append(argv[3]);
			aux = index + std::string(argv[2]).length();
		}
		out.append(line, index);
		outfile << out;
	}
	outfile.close();
	in.close();
}