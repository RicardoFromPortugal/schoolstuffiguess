#include <iostream>
#include <iomanip>
using namespace std;
int n,m;
int main(){
	cout << "\nquantas pessoas e numero fatias\n";
	cin >> n;
	cin >> m;
	if (m < n){
		cout << "no";
		main();}
	else{
	cout << "\npode dar " << (m/n) - (m%n) << " fatias para cada familiar\nresto para dar para refood:" << m%n;}
	sleep(60); 
}
