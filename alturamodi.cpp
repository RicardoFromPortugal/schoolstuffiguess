#include <iostream>
using namespace std;
int a[30],b[30],i,c,av;
int main(){
	for (i = 0; i < 30; i++){
		cout << "\nidade aluno " << i+1 << ":";
		cin >> a[i];
		cout << "\naltura: ";
		cin >> b[i];
		if(a[i]>=13){
		av=av+b[i];
		cout << "\n" << av;}}
	for (i=0;i<30;i++){
		if (a[i] >= 13 && b[i]<av){
			c++;}}
	av=av/c;
	cout << "\naverage is: " << av;
	cout << "\nstudents under the average height is: " << c;
		sleep(60);}