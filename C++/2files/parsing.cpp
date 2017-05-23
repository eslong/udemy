#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string fileName = "stats.txt";
	ifstream input;

	input.open(fileName);
	if (!input.is_open()) {
		return 1;
	}

	while (!input.eof()) {
		string line;
		int population;

		getline(input, line, ':');
		input >> population;
		input >> ws;	// Get trailing newline at the end of the line of input

		cout << line << " -- " << population << endl;
	}

	input.close();

	return 0;
}