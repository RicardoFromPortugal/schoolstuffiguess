#include <iostream>
#include <ctime>
using namespace std;
int a,b;
int main(){
	while(true){
	srand(time(0));
	cout << "\nhow many sides on die: ";
	cin >> a;
	cout << "you rolled " << rand()%a+1;}}
