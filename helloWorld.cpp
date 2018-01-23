// The following program writes "Hello, World!" to the console output

// This #include links to libraries other developers wrote for us that allow
// for us to easily read to and write from the console
#include <iostream>

// main() is the entry-point of an executable. In contrast, libraries don't
// have entry points, but are otherwise the same. Other programs use libraries
// for common functions, like calculating square roots.
// int is the return type of the function. All functions return something. For
// now, just accept it, since we should cover functions before going into this.

// using namespace allows you to remove text from your code. All iostream functions
// are part of the std namespace, so to use them properly, one must qualify them
// with "std::foo."
using namespace std;
int main()
{
	// Prints the words "Hello World" to the console, std::cin, which we've abbreviated
	// with the using namespace std line.
	cout << "Hello World" << endl;
	// cin.get() waits for user input before closing a console window. If you want to see
	// "Hello World" flash before your eyes almost faster than is perceptable, comment out
	// the following line:
	cin.get();
	// Functions end with a return statement. Here we have nothing to return, but in some cases
	// it is the outcome of some arithmetic, a account record, and much more.
	return;
}