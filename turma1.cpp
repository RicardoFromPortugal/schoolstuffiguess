#include <iostream>
#include <string>
//acrescentar: 
using namespace std;
int a,d,c,b[40000][40000],i,j,e;
string n[40000],m[40000];
int main(){
	cout << "how many students on the class: ";
	cin	>> a;
	for(i=0;i<a;i++){
		cout << "name " << i+1 << ": ";
		cin >> n[i];}
	cout << "how many subjects: ";
	cin >> d;
	for(i=0;i<d;i++){
		cout << "subject " i+1 << ": ";
		cin >> m[i];}
	for(i=0;i<a;i++){
		c=0;
		for(j=0;j<d;j++){
		cout << "grade of " << n[i] << "in" << m[j] << ": ";
		cin >> b[i][j];
		c=c+b[i][j];}
		cout << "media do aluno " << n[i] << ": " << c;}
	for(j=0;j<d;j++){
		c=0
		for(i=0;i<a;i++){
			c=c+b[i][j];}
		cout << "media da disciplina " << m[i] << ": " << c;}}
