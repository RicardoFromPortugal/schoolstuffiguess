#include <iostream>
#include <string>
using namespace std;
int ranj[3]={0,0,0},e,i,j,k,l,opt;
string awawa[3][15] = {{
            "Water bottle", "Plastic bag", "Food container", "Straw", "Plastic cup",
            "Toothbrush", "Packaging film", "Shampoo bottle", "Plastic spoon", "Plastic fork",
            "Phone case", "Pen", "CD case", "Garbage bin", "Tupperware"},{
            "Wine bottle", "Mason jar", "Windowpane", "Glass vase", "Light bulb",
            "Drinking glass", "Pyrex dish", "Mirror", "Perfume bottle", "Glass pitcher",
            "Shot glass", "Eyeglasses", "Glass table", "Hourglass", "Candle holder"},{
            "Notebook", "Newspaper", "Cardboard box", "Toilet paper", "Paper towel",
            "Post-it note", "Gift wrap", "Envelope", "Paper cup", "Magazine",
            "Flyer", "Paper bag", "Greeting card", "Calendar", "Origami"}};
void playerr(){
	e=0;
	for(i=0;i<10;i++){
		j=rand()%3;
		k=rand()%15;
		cout << awawa[j][k] << "\n0-plastic 1-glass 2-paper\n";
		cin >> l;
		if(l==j){
			e++;
			cout << "yes";}}
	for(i=0;i<3;i++){
		if(e>ranj[i]){
			int temp, temp2;
			temp=ranj[i];
			ranj[i]=e;
			if(i<2){
			temp2=ranj[i+1];
			ranj[i+1]=temp;}
			if(i<1){
			temp2=ranj[i+2];}
			i=4;}}}
void ranker(){
	for(i=0;i<3;i++){
		cout << i+1 << ": " << ranj[i] << "\n";}}
int main(){
	while(true){
	cout << "\n0-play 1-ranking 2-quit\n";
	cin >> opt;
	if(opt==0){
	playerr();}
	if(opt==1){
	ranker();}
	if(opt==2){
	return 0;}}}
