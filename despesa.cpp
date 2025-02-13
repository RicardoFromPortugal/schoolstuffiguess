#include <iostream>
using namespace std;
int shit(int a, int b){
	return a/b;}
int main(){
	int centimos,c;
	cout << "quantos centimos e quantas pessoas: ";
	cin >> centimos >> c;
	cout << shit(centimos,c) << " cents is for every individual in the group to pay";}
