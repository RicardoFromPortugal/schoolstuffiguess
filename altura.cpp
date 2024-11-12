#include <iostream>
using namespace std;
int a,b[30],i,c,av;
int main(){
	for (i = 0; i < 30; i++){
		cout << "\nidade aluno " << i+1 << " :";
		cin >> a;
		if (a>=13){
			c++;
			cout << "\n" << c;}}
	a=0;
	for (i=0; i < c; i++){
		cout << i+1 << "\n";
		cout << "altura (cm) do aluno com >= 13 n" << i+1 << "\n";
		cin >> b[i];
		a = a+b[i];
		cout << a << "\n\n";}
	av=a/c;
	cout << "\naverage is: " << av;
	a=0;
	for (i=0;i<c;i++){
		if (b[i]<av){
			a++;
			cout << "\n" << a;}}
	cout << "\nstudents under the average height is: " << a;
	sleep(60);}