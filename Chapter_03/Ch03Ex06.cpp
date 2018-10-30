#include<iostream>

using namespace std;

int main() {
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int swapVal = 0;

	cout << "Enter three integers, seperated by spaces: " << endl;	
	cin >> val1 >> val2 >> val3;

	// the first two if statements put the largest number into 
	// val3. val1 and val2 are still presumed unordered	
	if (val1 > val2) {
		swapVal = val2;
		val2 = val1;
		val1 = swapVal;
	}

	if (val2 > val3) {
		swapVal = val3;
		val3 = val2;
		val2 = swapVal;
	}

	// third if statement puts val1 and val2 in order
	if (val1 > val2) {
		swapVal = val2;
		val2 = val1;
		val1 = swapVal;
	}

	// val1, val2, val3 are now ordered
	cout << val1 << ", " << val2 << ", " << val3 << endl;

	return 0;
}
