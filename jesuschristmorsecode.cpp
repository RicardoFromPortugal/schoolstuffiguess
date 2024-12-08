#include <iostream>
#include <string>
using namespace std;
int o,l,h,i;
string insert, morse[36]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
char abc[36]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'}, shitmypants[10000];
int main(){
	cout << "translate it to 1. morse or 2 and other. to latin char? ";
	cin >> o;
	cout << "how many letters or dots and dashes and spaces?";
	cin >> l;
	cout << "put it here: \n";
	for(i=0;i<l+1;i++){
		cin >> noskipws >> shitmypants[i];}
		cout << "\n";
	for(i=0;i<l+1;i++){	
		cout << shitmypants[i];
		if(i==l){
		shitmypants[i+1]=' ';}}
	shitmypants[l+1]<<' ';
	cout << "\n";
	if(o==1){
	for(i=0;i<l+1;i++){
			for(h=0;h<36;h++){
				if(abc[h]==shitmypants[i]){
				cout << morse[h] << " ";}}}}
	else{
	for(i=0;i<l+5;i++){
	if(shitmypants[i]=='.'||shitmypants[i]=='-'){
		insert=insert+shitmypants[i];}
		else if(shitmypants[i]==' '){
		for(h=0;h<36;h++){
			if(insert==morse[h]){
				cout << abc[h];}}
		insert="";}}}}
