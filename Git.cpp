#include <iostream>

using namespace std;

void power(int base, int exponent);

int main() {

	power(4, 2);
	return 0;
}

void power(int base, int exponent) {
	int number;

	cout << "Base number: " << base << endl;
	cout << "Exponent: " << exponent << endl;
}