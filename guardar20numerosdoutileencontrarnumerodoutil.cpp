#include <iostream>
// 20 int num, asks 20 numbers, then aks you one number to find from the array i guess
using namespace std;
int a[20],b,i;
int main(){
	for(i=0;i<20;i++){
		cout << "\nnumber " << i+1 << " to insert in a[" << i << "]: ";
		cin >> a[i];}
		cout << "\nwhat number do you wanna find? ";
		cin >> b;
	for(i=0;i<20;i++){
		if(a[i]==b){
			cout << "found it! it's in " << "a[" << i << "].";
			sleep(60);
			break;}}}