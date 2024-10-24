#include <iostream>
#include <iomanip>
float temp;
int opt;
using namespace std;
int main(){
	cout << "\n1.celcius (europapa)\n2.fahrenheit (murica)\nentering letters will make the program scream\n";
	cin >> opt;
	switch (opt){
		case 1:
		cout << "\ninsert celcius\n";
		cin >> temp;
		cout << temp << "C is " << setprecision(1) << fixed << (temp * 1.8) + 32 << "F\n";
		// shut up about the main(), i know what you're gonna say , teacher. its fine, its readable, its for going back to start.
		main();
		case 2:
		cout << "\ninsert fahrenheit\n";
		cin >> temp;
		cout << temp << "F is " << setprecision(1) << fixed << (temp - 32) / 1.8 << "C\n";
		// shush
		main();
		default:
		cout << "\ninvalid option\n";
		// shush
		main();
	}}