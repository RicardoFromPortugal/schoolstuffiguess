#include <iostream>
#include <string>
using namespace std;
int ga[5][12],i,j,menspro,s;
string products[5]={"batatas","cenouras","couves","alfaces","brocolos"}, meses[12]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
void eeee(){
	for(i=0;i<5;i++){
		for(j=0;j<12;j++){
			cout << "\nquantas " << products[i] << " compraste em " << meses[j] << "?\n";
			cin >> ga[i][j];}}}
void badboys(){
	for(j=0;j<12;j++){
		menspro=0;
		for(i=0;i<5;i++){
			menspro=menspro+ga[i][j];}
		cout << "\n" << meses[j] << ": " << menspro;}}
void turtle(){
	for(i=0;i<5;i++){
		menspro=0;
		for(j=0;j<12;j++){
			menspro=menspro+ga[i][j];}
	cout << "\n" << products[i] << ": " << menspro;}}
int main(){
	while(true){
	cout << "\n0 - sair\n1 - mensais\n2 - totais por produto\n3 - inserir valores\n";
	cin >> s;
	if(s==0){
		return 0;}
	if(s==1){
		badboys();}
	if(s==2){
		turtle();}
	if(s==3){
		eeee();}}}