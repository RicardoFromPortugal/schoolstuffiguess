#include <iostream>
using namespace std;
int a;
bool b=false;
int main(){
	cin >> a;
	if(a%2==0){
		cout << "\neven";}
	else{
		cout << "\nodd";}
	for(int i=2;i<a;i++){
		if(a%i==0){
			i=a;
			b=true;}}
	if(b==true){
		cout << "\nnot prime";}
	else{
		cout << "\nprime";}}
