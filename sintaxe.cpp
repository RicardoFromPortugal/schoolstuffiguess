#include <iostream>
using namespace std;
int a,med,moe[20000],i,t,e=0;
void medianumeros(){
	a=1;
	med=0;
	for(i=1;a!=0;i++){
		cout << "number " << i << ": ";
		cin >> a;
		if(a!=0){
			med=med+a;}
		else{
			cout << med/i;}}
		return;}
void menormaior(){
	cout << "quantos: ";
	cin >> a;
	if(a>20000){
		cout << "num too large, setting it to 10";
		a=10;}
	for(i=0;i<a;i++){
		cout << "\nnum " << i+1 << ": ";
		cin >> moe[i];
		if(i=0||e==2&&moe[i]>t||e==3&&moe[i]<t){
			t=moe[i];}}
		cout << "it is " << t;
		return;}
int main(){
	while(true){
		cout << "\n1. average\n2. maior\n3. menor\n0. sair\n";
		cin >> e;
		if(e==1){
			medianumeros();}
		else if(e==2||e==3){
			menormaior();}
		else if(e==0){
			return 0;}}}
