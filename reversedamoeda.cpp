#include <iostream>
#include <string>
using namespace std;
string n[5];
int i;


int main(){
	do{
	cout << "\nhello\n";
	for(int i = 0; i < 5 ; i++){
		cout << "\ninput name\n";
		cin >> n[i];
	}
	for(int i = 5; i > -1; i--){
		cout << "\n" << n[i]; 
	}
	cout << "\nexit? 1 for yes, other for no\n";
	cin >> i;}
while(i!=1);
}