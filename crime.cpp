#include <iostream>
using namespace std;
int scr,ecr,sust,susd,s,i=0;
int main(){
	cout << "how many scenarios\n";
	cin	>> s;
	while(i<s){
		cout << "\nwhen crime happen (insert start then end)\n";
		cin >> scr;
		cin >> ecr;
		cout << "\nwhen was sus in other place (start then end)\n";
		cin >> sust;
		cin >> susd;
		if (scr < 0 || ecr < scr || ecr > 24 || sust < 0 || susd < sust || susd > 24){
			cout << "\nbruh\n";}
		else if (scr > sust && ecr < susd){
			i++;
			cout << "\nyup they have an alibi there\n";}
		else{
			i++;
			cout << "\nno they hecking do not have an alibi\n";}}
		sleep(600);}