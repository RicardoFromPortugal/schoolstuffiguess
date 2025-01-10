#include <iostream>
#include <iomanip>
using namespace std;
int a[10],e=0,i,mai,men;
float r,med;
float mediaaa(int b[10]){
	r=0;
	for(i=0;i<10;i++){
		r+=b[i];}
	r=r/10.0f;
	return r;}
int maiormenor(int b[10]){
	r=0;
	for(i=0;i<10;i++){
		if(i==0||(e==0&&b[i]>r)||(e==1&&b[i]<r)){
			r=a[i];}}
	return r;}
int main(){
	cout << "10 num\n";
	for(i=0;i<10;i++){
		cin >> a[i];}
	med=mediaaa(a);
	mai=maiormenor(a);
	e++;
	men=maiormenor(a);
	cout << fixed << showpoint;
	cout << setprecision(3) << "\nmedia: " << med << "\nmaior: " << mai << "\nmenor: " << men << endl;}
