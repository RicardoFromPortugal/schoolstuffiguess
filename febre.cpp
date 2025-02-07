#include <iostream>
using namespace std;
int a[2], b[2];
int main(){
	for(int i=0;i<2;i++){
		cin >> a[i] >> b[i];}
	if(a[1]<37){
		cout << "\nNORMAL";}
	else if(a[0]<a[1]||(a[0]==a[1]&&b[0]<b[1])){
		cout << "\nFEBRE SUBIU";}
	else if(a[0]>a[1]||(a[0]==a[1]&&b[0]>b[1])){
		cout << "\nFEBRE DIMINUIU";}
	else{
		cout << "\nFEBRE MANTEVE";}} 