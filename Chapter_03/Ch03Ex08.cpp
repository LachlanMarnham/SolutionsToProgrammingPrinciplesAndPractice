#include<iostream>

using namespace std;

int main() {
	int val = 0;
	string even_or_odd = "even";

	cout << "Enter an integer: " << endl;
	cin >> val;

	if (val % 2 != 0) {
		even_or_odd = "odd";
	}

	cout << "The value " << val << " is an " << even_or_odd << " number" << endl;

	return 0;
}


