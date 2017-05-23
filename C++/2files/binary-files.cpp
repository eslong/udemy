#include <iostream>
#include <fstream>
using namespace std;

// Pre-compiler directive to remove struct padding
#pragma pack(push, 1)
struct Person {
	char name [50];
	int age;
	double weight;
};
#pragma pack(pop)

int main() {
	string fileName = "person.bin";
	ofstream outFile;

	outFile.open(fileName, ios::binary);
	

	return 0;
}