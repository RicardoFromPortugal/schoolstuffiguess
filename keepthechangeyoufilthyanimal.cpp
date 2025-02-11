#include <iostream>
using namespace std;
int euros, cents, dis[8];
float coins[8]={2,1,0.50,0.20,0.10,0.05,0.02,0.01}, dick,tt,total;
int main(){
		cout << "valor de compra(euro e centimos spearados pelo espaco): ";
		cin >> euros >> cents;
		dick=euros+(cents*0.01);
		cout << dick;
	for(int i=0;i<8;i++){
	cout << "\nhow many " << coins[i] << " coins did the client give: ";
	cin >> dis[i];
	total=total+(coins[i]*dis[i]);}
	cout << "\n" << total << " " << dick << "\n";
	if(total>=dick){
		tt=total-dick;
		cout << tt;
		if(tt==0){
			cout << "\nping pong";}
		else{
			cout << "\n";
			for(int i=0;i<8;i++){
				for(int j=0;j<10000;j++){
					if(tt-(coins[i]*(j+1))<0){
						cout << j << " ";
						tt-=(coins[i]*j);
						j=100001;}}}}}
	else{
		cout << "no";}}
