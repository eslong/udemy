#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[9999999999999];
		delete [] pMemory;
	}
};

int main() {
	try {
		CanGoWrong wrong;
	} catch (bad_alloc &e) {
		cout << "Bad alloc exception caught: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}