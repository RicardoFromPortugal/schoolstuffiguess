#include <iostream>
using namespace std;
int a;

int main(){
	cout << "\nenter number 1 to 100\n";
	cin >> a;
	if (a > 100 || a < 1){
		cout << "\ninvalid number, setting it to 100";
		a = 100;}
	if (a%2 == 0){
		a--;
		sleep(1);}
		for (a; a > 0; a){
			cout << "\n" << a;
			sleep(2);
			a=a-2;}}