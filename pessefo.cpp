#include <iostream>
int jogar[100],pessego=-1,p,pontao,i,e,jogger=-1,j,lol,lul=0;
using namespace std;
void ronda(){
	pontao=0;
	lul=0;
	for(i=0;i<pessego;i++){
		cout << "\njogador " << i+1 << ": ";
		cin >> p;
		if(p<pessego&&p>0){
		pontao=pontao+p;}
		else{
		i--;}}
	e=pontao%pessego;
	cout << e << "\n";
	for(i=0;i<pessego;i++){
		cout << "advinha, jogador " << i+1 << ": ";
		cin >> p;
		if(p==e){
			jogar[i]++;
			lul++;}}
		cout << "\n" << lul << " jogadores acertaram";
		return;}
int main(){
	while(pessego>100||pessego<0){
	cout << "quantos jogadores? ";
	cin >> pessego;}
	while(jogger>10||jogger<0){
	cout << "quantas jogadas? ";
	cin >> jogger;}
	for(j=0;j<jogger;j++){
		ronda();}
	for(j=0;j<pessego;j++){
		if((j==0)||jogar[j]>lol){
			lol=j;}
		cout << "\njogador " << j+1 << ": " << jogar[j];}
		cout << "\njogador " << lol << " got most points";}