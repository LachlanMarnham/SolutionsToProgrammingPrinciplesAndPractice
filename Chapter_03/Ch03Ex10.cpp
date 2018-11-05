#include<iostream>

using namespace std;

int main() {
	char operation = ' ';
	double lhs = 0;
	double rhs = 0;
	double result = 0;

	cout << "Enter an operator followed by two operands: " << endl;
	cin >> operation >> lhs >> rhs;

	if (operation == '+') {
		result = lhs + rhs;
	} else if (operation == '-') {
		result = lhs - rhs;
	} else if (operation == '*') {
		result = lhs * rhs;
	} else if (operation == '/') {
		if (rhs == 0) {
			cout << "Can't divide by zero" << endl;
			return 0;
		}
		result = lhs / rhs;
	} else {
		cout << "Invalid operation, enter one of +, -, * or /" << endl;
		return 0;
	}

	cout << lhs << operation << rhs << '=' << result << endl;
	return 0;

}
