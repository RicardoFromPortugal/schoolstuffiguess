#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
int s;
float min, km;
float mx = 0.1;
float mxl = 0.15;
float tx = 1;
float txl = 1.5;
float kmx = 0.8;
float kmxl = 1.2;
float tmx = 2.5;
float tmxl = 3.5;
int main(){
	cout << "\n1. UberX\n2. UberXL\n";
	cin >> s;
	cout << "\nquantos minutos esta viagem? max = 10000\n";
	cin >> min;
	cout << "\nquantos km? max = 5000\n";
	cin >> km;
	if (km > 5000 || km < 0 || min > 10000 || min < 0 || s >= 3 || s <= 0)
	{
		cout << "\numa alguns valores invalidos, tenta outra vez\n";
		main();
	}
	switch (s){
		case 1:
		if ((km*kmx)+(min*mx)+tx<tmx){
		cout << tmx << " euros";
		main();}
		else{
			cout << setprecision(2) << fixed << (km*kmx)+(min*mx)+tx << " euros";
			main();
		}
		case 2:
		if ((km*kmxl)+(min*mxl)+txl<tmxl){
		cout << tmxl << " euros";
		main();}
		else{
			cout << setprecision(2) << fixed << (km*kmxl)+(min*mxl)+txl << " euros";
			main();
	}
}}