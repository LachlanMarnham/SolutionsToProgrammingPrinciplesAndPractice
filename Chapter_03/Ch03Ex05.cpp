#include<iostream>

using namespace std;

int main() {
	double val1 = 0;
	double val2 = 0;
	double difference = 0;
	double ratio = 0;
	bool undefined_ratio = false;

	cout << "Enter two floating point numbers (seperated by a space): " << endl;
	cin >> val1 >> val2;

	if (val1 <= val2) {
		cout << "The smaller of the values is: " << val1 << endl;
		cout << "The larger of the values is: " << val2 << endl;
		difference = val2 - val1;

		if (val2 != 0) {
			// we will assume that the ratio required is of the form
			// smaller_num / larger_num
			ratio = val1 / val2;
		} else {
			// because of the assumption above, we can only hit this
			// if both variables are zero
		       	undefined_ratio = true;
		}	       
	} else {
		cout << "The smaller of the values is: " << val2 << endl;
		cout << "The larger of the values is: " << val1 << endl;
		difference = val1 - val2;
		ratio = val2 / val1;
	}

	cout << "Their sum is: " << val1 + val2 << endl;
	cout << "Their difference is: " << difference << endl;
	cout << "Their product is: " << val1 * val2 << endl;
	if (undefined_ratio) {
		cout << "Their ratio is undefined" << endl;
	} else {
		cout << "Their ratio is: " << ratio << endl;
	}

	return 0;
}

