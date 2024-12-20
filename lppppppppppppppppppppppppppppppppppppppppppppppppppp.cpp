#include <iostream>
using namespace std;
char frase[40000];
int a,i;
int main(){
	cout << "how many letters and spaces for word/frase: ";
	cin >> noskipws >> a;
	cout << "alright, type it in: ";
	for(i=0;i<a+1;i++){
		cin >> frase[i];}
	cout << "translated: ";
	for(i=0;i<a+1;i++){
		cout << frase[i];
		if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'||frase[i]=='A'||frase[i]=='E'||frase[i]=='I'||frase[i]=='O'||frase[i]=='U'){
			cout << "p" << frase[i];}}
	sleep(60);}
