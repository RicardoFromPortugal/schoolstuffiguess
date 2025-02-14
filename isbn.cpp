#include <iostream>
using namespace std;
int fuckery[13],dicks;
int main(){
	for(int i=0;i<13;i++){
		cout << "digit " << i+1 << ": ";
		cin >> fuckery[i];
		if(fuckery[i]>=10){
			i--;}}
	for(int i=1;i<7;i++){
		fuckery[(i*2)-1]=fuckery[(i*2)-1]*3;}
	for(int i=0;i<12;i++){
		dicks+=fuckery[i];}
	dicks=dicks%10;
	if((10-dicks)!=fuckery[12]){
		cout << "\ncontrol digit is wrong, it's " << 10-dicks;}
	else{
		cout << "\nseems good";}}
