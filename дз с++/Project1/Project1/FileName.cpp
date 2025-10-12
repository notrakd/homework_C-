#include <iostream>
using namespace std;
int main() {

	while (true) {
		/*int a;
		cout << "Enter chislol ot 1 do 100\n";
		cin >> a;

		if (a < 0 || a > 100) {
			cout << "Error 404\n";
		}

		else if (a % 3 == 0 && a % 5 == 0) {
			cout << "Fizz Buzz\n";
		}
		
		else if (a % 3 == 0) {
			cout << "Fizz\n";
		}
		else if (a % 5 == 0) {
			cout << "Buzz\n";
		}
		else {
			cout << a << endl;
		}*/

		int a;
		cout << "Enter number of month";
		cin >> a;
		if (a < 0 || a > 12) {
			cout << "Error 404\n";
		}

		else if (a == 1) {
			cout << "January \n";
		}
		else if (a == 2) {
			cout << "February \n ";
		}
		else if (a == 3) {
			cout << "March \n";
		}
		else if (a == 4) {
			cout << "April \n";
		}
		else if (a == 5) {
			cout << "May \n";
		}
		else if (a == 6) {
			cout << "June \n";
		}
		else if (a == 7) {
			cout << "July \n";
		}
		else if (a == 8) {
			cout << "August \n";
		}
		else if (a == 9) {
			cout << "September \n";
		}
		else if (a == 10) {
			cout << "October \n";
		}
		else if (a == 11) {
			cout << "November \n";
		}
		else if (a == 12) {
			cout << "December \n";
		}
	}
	
}