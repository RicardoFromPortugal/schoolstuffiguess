#include <iostream>
using namespace std;
int a[10],b[10],c[20],i;
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
	sleep(60);}