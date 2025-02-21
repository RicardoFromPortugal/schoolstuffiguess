#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float a[10],b[10];
int c;
void insertion(){
	for(int i=0;i<10;i++){
		cout << "height " << i+1 << ": ";
		cin >> a[i];
		cout << "weight " << i+1 << ": ";
		cin >> b[i];}}
void whichs(){
	cout << "which one: ";
	cin >> c;
	cout << fixed << setprecision(2) << a[c]/(pow(b[c],2));}
void ssss(){
	int d=0;
	for(int i=0;i<9;i++){
		d+=a[i]/(pow(b[i],2));}
	cout << d;}
int main(){
	while(true){
		cout << "\n1-insert 2-individual bmi calc 3-average 0-exit\n";
		cin >> c;
		if(c==1){
			insertion();}
		if(c==2){
			whichs();}
		if(c==3){
			ssss();}
		if(c==0){
			return 0;}}}