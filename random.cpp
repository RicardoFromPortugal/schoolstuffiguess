#include <iostream>
#include <ctime>
using namespace std;
int b;
int main(){
	cout << "\nguess number up to 100\n";
	srand(time(0));
	int a = rand()%101;
	cin >> b;
	while (b != a){
	if (a > b){
	cout << "\nhigher\n";
	cin >> b;}
	else{
	cout << "\nlower\n";
	cin >> b;}}
	cout << "\nyahoo you got it!\n";
	sleep(60);}