#include<iostream>

using namespace std;

int main() {
	int total = 0;
	int num_pennies = 0;
	int penny_val = 1;
	int num_nickels = 0;
        int nickel_val = 5;
	int num_dimes = 0;
	int dime_val = 10;
	int num_quarters = 0;
	int quarter_val = 25;
	int num_half_dollars = 0;
	int half_dollar_val = 50;
	int num_dollars = 0;
	int dollar_val = 100;
	
	cout << "How many pennies do you have?" << endl;
	cin >> num_pennies;
	total += num_pennies * penny_val;

	cout << "How many nickels do you have?" << endl;
	cin >> num_nickels;
	total += num_nickels * nickel_val;

	cout << "How many dimes do you have?" << endl;
	cin >> num_dimes;
	total += num_dimes * dime_val;

	cout << "How many quarters do you have?" << endl;
	cin >> num_quarters;
	total += num_quarters * quarter_val;

	cout << "How many half dollars do you have?" << endl;
	cin >> num_half_dollars;
	total += num_half_dollars * half_dollar_val;

	cout << "How many dollars do you have?" << endl;
	cin >> num_dollars;
	total += num_dollars * dollar_val;
	
	cout << "You have " << num_pennies << " pennies." << endl;
	cout << "You have " << num_nickels << " nickels." << endl;
	cout << "You have " << num_dimes << " dimes." << endl;
	cout << "You have " << num_quarters << " quarters." << endl;
	cout << "You have " << num_half_dollars << " half dollars." << endl;
	cout << "You have " << num_dollars << " dollars." << endl;
	cout << "The value of all your coins is " << total << " cents" << endl;
	return 0;
}
