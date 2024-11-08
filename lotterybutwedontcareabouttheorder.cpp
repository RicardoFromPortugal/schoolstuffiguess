#include <iostream>
#include <time.h>
#include <stdlib.h>
 int main() {
	using namespace std;
	int numbah[5], number[5] = { 0,0,0,0,0 };
	int i, a, j, b=0;
	srand(time(0));
	for (i = 0; i < 5; i++) {
		numbah[i]= rand() % 50 + 1;
		cout << numbah[i] << "\n";
	}
	for (i = 0; i < 5; i++) {
		cout << "\n1 to 50\n" << i + 1 << " ";
		cin >> a;
		if (a < 51 && a > 0) {
			number[i] = a;
		}
		else {
			cout << "\nno\n";
		}
	}
	for (j = 0; j < 5; j++){
		cout << numbah[j] << " ";
	for (i = 0; i < 5; i++) {
		if (number[i] == numbah[j]) {
			b++;
		}
	}}
	cout << "\n";
	for (i = 0; i < 5; i++) {
		cout << number[i] << " ";
	}
	if (b == 5) {
		cout << "\nHOLY CRAP YOU WON A MILLION BITCOIN WOOOOOOOOOOOOOOOOOOOOOOOO\n";
	}
	else {
		cout << "\nyou didn't win ;(\n";
	}
}
 
	
		
	
