#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	stringstream ss;

	ss << "Name is: " << name;
	ss << "; Age is: " << age << endl;

	string info = ss.str();

	cout << info;

	return 0;
}
