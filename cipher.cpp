#include <iostream>
char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}, b[40000];
int c,d,i,e;
using namespace std;
int main(){
	cout << "how many letters is the frase? ";
	cin >> c;
	cout << "\n1. encode or 2 or other num. decode? ";
	cin >> d;
	cout << "shifted letters by? ";
	cin >> e;
	cout << "\n" << a[(1-e)];
	cout << "alright type it in: \n";
	for(i=0;i<c;i++){
		cin >> b[i];}
	for(i=0;i<c;i++){
		cout << b[i];}
	cout << "\nfrase: ";
	if(d==1){
		for(i=0;i<c;i++){
			for(d=0;d<26;d++){
				if(a[d]==b[i]){
				if((d+e)>25){
				cout << a[(d+e)%26];}
				else{
				cout << a[d+e];}}}}}
	else{
		for(i=0;i<c;i++){
			for(d=0;d<26;d++){
				if(a[d]==b[i]){
				if((d-e)>=0){
				cout << a[d-e];}
				else{
				cout << a[26+(d-e)];}}}}}}
