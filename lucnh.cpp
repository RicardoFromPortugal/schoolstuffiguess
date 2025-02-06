#include <iostream>
#include <ctime>
using namespace std;
int bet[20], randomingo, players, freelunch, freelunchnum=200, yay;
int main(){
	srand(time(0));
	cout << "how many players? ";
	cin >> players;
	randomingo=rand()%100;
	cout << "\ntesting purposes: " << randomingo;
	for(int i=0;i<players;i++){
		cout << "\nplayer " << i+1 << "'s bet: ";
		cin >> bet[i];}
	for(int i=0;i<players;i++){
		if((randomingo - bet[i])>=0&&(randomingo - bet[i])<freelunchnum){
			freelunchnum=(randomingo-bet[i]);
			freelunch=i;
			yay++;}
		else{
			cout << "\naposta: " << bet[i] << "random: " << randomingo << "equated: " << (randomingo - bet[i]);}}
	if(yay==0){
		cout << "\nno free lunch :(";}
	else{
		cout << "\nplayer " << freelunch+1 << "gets free lunch! :)";
	}
		
	
}
