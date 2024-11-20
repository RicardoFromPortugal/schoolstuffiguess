#include <iostream>
using namespace std;
int a[30],b[30],i,c,av;
int main(){
	for (i = 0; i < 30; i++){
		cout << "\nidade aluno " << i+1 << ":";
		cin >> a[i];
		cout << "\naltura: ";
		cin >> b[i];
		av=av+b[i];
		cout << av;}
	av=av/30;
	for (i=0;i<30;i++){
	if (a[i]>=13&&b[i]<av){
	c++;}}
	cout << "\naverage is: " << av;
	cout << "\nstudents >=13 under the average height is: " << c;
		sleep(60);}