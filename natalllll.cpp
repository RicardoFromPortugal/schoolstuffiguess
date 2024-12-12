#include <iostream>
#include <string>
using namespace std;
string a[6]={"batata frita","bolo rei","perfume","par de meias","pijama","chocolate com ginja"}, b[22]={"clara","abdullah","andre","andrei","hugo","paloma","joao","leonardo","miguel","pedro","pierre","rafael","ricardo","salvador","sartaj","tiago", "tomas filipe","ulisses","henrise","heros","tomas","tuqeer"};
int whatthefuck[6][22];
int totalprodutos,totalpessoas,total,i,d,c;
int main(){
	for(i=0;i<22;i++){
		for(d=0;d<6;d++){
			cout << "\nquantas " << a[d] << "s deu o/a " << b[i] << "? ";
			cin >> c,whatthefuck[d][i];}}
	for(i=0;i<22;i++){
		cout << b[i] << "| ";}
	for(d=0;d<6;d++){
		cout << "\n" << a[d]; 
		for(i=0;i<22;i++){
		cout << "| " << whatthefuck[d][i];}}
	for(i=0;i<22;i++){
		for(d=0;d<6;d++){
			total=total+whatthefuck[d][i];}}
	cout << "\ntotal produtos todos: " << total;
	cout << "\ntotal produtos dados por\n";
	for(i=0;i<22;i++){
		cout << b[i] << ": ";
		totalpessoas=0;
		for(d=0;d<6;d++){
			totalpessoas=totalpessoas+whatthefuck[d][i];}
		cout << totalpessoas << "\n";}
		cout << "\ntotal de\n";
		for(d=0;d<6;d++){
			cout << a[d] << ": ";
			totalprodutos=0;
			for(i=0;i<22;i++){
				totalprodutos=totalprodutos+whatthefuck[d][i];}
			cout << totalprodutos << "\n";}
		sleep(60);}
