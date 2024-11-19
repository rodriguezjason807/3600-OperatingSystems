#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void summation(ofstream & file, int number);

int main() {
	
	ofstream output_file("output");

	if ( !output_file ) {
		cerr << "Error opening file!" << endl;
		return 1;
	} else {
		cout << "File has been created ...\n";
	}

	string name;
	int number;

	cout << "Weird question but what is your name: ";
	cin >> name;
	cout << "Okay another weird question choose a number: ";
	cin >> number;

	output_file << "The name you entered is " << name << endl;
	output_file << "The number you entered is " << number << endl;

	summation(output_file, number);

	output_file.close();

	return 0;
}

void summation(ofstream & file, int number) {

	int sum = 0;

	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}

	file << "The summation value of the number " << number << " is " << sum << endl;
}
