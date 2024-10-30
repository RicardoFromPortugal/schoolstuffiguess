#include <iostream>
using namespace std;
double a, b;
int o;
int main(){
	cout << "\n1. add\n2. subtract\n3. multiply\n4. divide\n";
	cin >> o;
	cout << "\nnum 1\n";
	cin >> a;
	cout << "\nnum 2\n";
	cin >> b;
	switch (o){
	case 1:
		cout << a+b;
		main();
	case 2:
		cout << a-b;
		main();
	case 3:
		cout << a*b;
		main();
	case 4:
		cout << a/b;
		main();
	default:
		main();}}