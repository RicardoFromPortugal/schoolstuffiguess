#include <iostream>
#include <string.h>
using namespace std;
string gg[4]={"uau! ainda vais preso!","a nadar em dinheiro, ahn?","cuidado para nao afundares o banco com tanto dinheiro!","ja vi que finalmente tomaste banho e foste a casa da madrinha"},shit;
int mailbox,wallet=10000,depwith,banker=1000;
void cashapp(){
	cout << "to who? ";
	cin >> shit;
	cout << "how much? this is coming from your bank acc: ";
	cin >> depwith;
	if(depwith>banker){
		cout << "no";}
	else{
		banker -= depwith;
		cout << "money sent to " << shit;}}
void moner(){
	cout << "you have " << wallet << " in your wallet and " << banker << " in the bank";}
void withdrawer(){
	cout << "you have " << banker << " in the bank, how much to withdraw? ";
	cin >> depwith;
	if(depwith>banker){
		cout << "no";}
	else{
		wallet += depwith;
		banker -= depwith;
		if(depwith>wallet){
			cout << "calm down, what're you going to spend with that money?";}}}
void depositer(){
	cout << "\nhow much? you have " << wallet << ":";
	cin >> depwith;
	if(depwith>wallet){
		cout << "no";}
	else{
		wallet -= depwith;
		banker += depwith;
		if(depwith>=2000){
			cout << "\n" << gg[rand()%4];}}}
void iniciarecran(){
	while(true){
		cout << "\n0- Deposit 1- Withdraw 2- View bank 3- Send money to someone\n";
		cin >> mailbox;
		if(mailbox==0){
		depositer();}
		if(mailbox==1){
		withdrawer();}
		if(mailbox==2){
		moner();}
		if(mailbox==3){
		cashapp();}}}
int main(){
	iniciarecran();}
