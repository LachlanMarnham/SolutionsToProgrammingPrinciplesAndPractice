#include<iostream>

using namespace std;

int main() {
	string input = "";

	cout << "Enter the name of an integer (eg zero, one, two...): " << endl;
	cin >> input;

	if (input == "zero") {
		cout << 0;
	} else if (input == "one") {
		cout << 1;
	} else if (input == "two") {
		cout << 2;
	} else if (input == "three") {
		cout << 3;
	} else if (input == "four") {
		cout << 4;
	} else {
		cout << "Not a number I know.";
	}

	cout << endl;
	
	return 0;
}
