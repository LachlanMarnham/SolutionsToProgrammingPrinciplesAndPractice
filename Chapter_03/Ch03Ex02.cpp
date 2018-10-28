#include<iostream>

using namespace std;

int main() {
	double kilometers_per_mile = 1.609;
	double distance_in_miles = 0;
	double distance_in_km = 0;

	cout << "Enter a distance in miles: ";
	cin >> distance_in_miles;

	distance_in_km = distance_in_miles * kilometers_per_mile;
	cout << distance_in_km << " kilometers" << endl;

	return 0;
}

