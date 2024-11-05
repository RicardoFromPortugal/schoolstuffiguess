#include <iostream>
using namespace std;
int main(){
	int array[10],a,b,c,i;
	for (i = 0; i < 10; i++){
		cout << "\ninsert numba\n";
		cin >> array[i];}
		for (i = 0; i < 10; i++){
		if (array[i]<0){
		b++;
		c = c + array[i];}}
		cout << "\n1.sum of negs or 2.number of negs?\n";
		cin >> a;
		switch (a){
		case 1:
		cout << "\n" << c << "\n";
		main();
		case 2:
		cout << "\n" << b << "\n";
		main();
		default:
		cout << "\ninvalid option, but\nsum of negs:" << c << "\nnumber of negs:" << b << "\n";
		main();}}
		