#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//ofstream outputFile;
	fstream outputFile;
	string fileName = "text.txt";

	//outputFile.open(fileName);
	outputFile.open(fileName, ios::out);
	if (outputFile.is_open()) {
		outputFile << "Hello there" << endl;
		outputFile << 123 << endl;
		outputFile.close();
	} else {
		cout << "Could not open file: " << fileName << endl;
	}

	return 0;
}