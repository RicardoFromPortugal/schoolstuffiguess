#include <iostream>
using namespace std;
long long int a;
int main(){
	cin >> a;
	if(a%4==0&&((a%100!=0)||(a%400==0))){
		cout << "yes";}
	else{
		cout << "no";}}
