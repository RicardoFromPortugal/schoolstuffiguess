#include <iostream>
using namespace std;
int a[10],b[10],c[20],i,large;
int main(){
	for(i=0;i<10;i++){
		cout<<"\nWrite to a[" << i << "]: ";
		cin >> a[i];
		c[2*i]=a[i];
		cout<<"\nWrite to b[" << i << "]: ";
		cin >> b[i];
		c[2*i+1]=b[i];}
	cout << "\nc = ";
	for(i=0;i<20;i++){
		cout << c[i] << " ";}
	for(i=0;i<20;i++){
		if (c[i]>large){
			large = c[i];}}
	cout << "\nlargest number in array c is: " << large;
	sleep(60);}