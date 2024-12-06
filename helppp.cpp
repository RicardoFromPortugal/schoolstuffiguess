#include <iostream>
using namespace std;
int a,c=0,d=0,i,p=0,e,s,l,k,y[26],z[26];
char b[100],n[100],abc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main(){
	for(i=0;i<25;i++){
	cout << abc[i];}
	cout << "quantas letras para palavra 1: ";
	cin >> c;
	cout << "e 2: ";
	cin >> d;
	cout << "\n" << c << " " << d;
	if(c!=d){
	cout << "\nnot an anagram";
	sleep(60);
	return 0;}
	for(i=0;i<c;i++){
		cout << "\npalavra 1: ";
		cin >> b[i];}
	for(i=0;i<d;i++){
		cout << "\npalavra 2: ";
		cin >> n[i];}
		cout << "\nwhat\n";
for(i=0;i<25;i++){
	e=0;
	s=0;
	for(a=0;a<c;a++){
	if(b[a]==abc[i]){
	e++;}
	if(n[a]==abc[i]){
	s++;}}
	if(e==s){
		p++;}}
cout << "\n";
if(p==25){
	for(i=0;i<c;i++){
		cout << b[i];}
	cout << "\nis an anagram of\n";
	for(i=0;i<d;i++){
		cout << n[i];}
	sleep(60);}
else{
	for(i=0;i<c;i++){
	cout << b[i];}
	cout << "\nis not an anagram of\n";}
	for(i=0;i<d;i++){
	cout << n[i];}}