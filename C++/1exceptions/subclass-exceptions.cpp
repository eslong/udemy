#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
	bool error1 = true;
	bool error2 = false;

	if (error1) {
		throw bad_alloc();
	}

	if (error2) {
		throw exception();
	}
}

int main() {
	// Since bad_alloc is a subclass of exception, if we want to catch it specifically,
	//	we need to catch it before exception because exception will also catch all subclasses.

	try {
		goesWrong();
	} catch (bad_alloc &e) {
		cout << e.what() << endl;
	} catch (exception &e) {
		cout << e.what() << endl;
	}

	return 0;
}