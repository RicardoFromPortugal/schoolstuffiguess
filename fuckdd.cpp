#include <iostream>
#include <string>
using namespace std;
string filme[4]={"2001: Space Odyssey","The Godfather","Indiana Jones","Schinlder's list"};
int melhoratriz(){
	int e[4],r, i,a;
	for(i=0;i<4;i++){
		cout << "rate that actress of " << filme[i] << ": ";
		cin >> e[i];
		if(e[i]<1||e[i]>5){
			i--;}}
	for(i=0;i<4;i++){
		if(i==0||e[i]>r){
			a=i;
			r=e[i];}
	cout << "it's " << filme[a];}
	return a;}
int melhorator(){
	int e[4],r, i,a;
	for(i=0;i<4;i++){
		cout << "rate that ator of " << filme[i] << ": ";
		cin >> e[i];
		if(e[i]<1||e[i]>5){
			i--;}}
	for(i=0;i<4;i++){
		if(i==0||e[i]>r){
			a=i;
			r=e[i];}
	cout << "it's " << filme[a];}
	return a;}
int pintofgold(){
	int e[4],r, i,a;
	for(i=0;i<4;i++){
		cout << "rate the visuals of " << filme[i] << ": ";
		cin >> e[i];
		if(e[i]<1||e[i]>5){
			i--;}}
	for(i=0;i<4;i++){
		if(i==0||e[i]>r){
			a=i;
			r=e[i];}
	cout << "it's " << filme[a];}
	return a;}
int melhorost(){
	int e[4],r,i,a;
	for(i=0;i<4;i++){
		cout << "rate the ost of " << filme[i] << ": ";
		cin >> e[i];
		if(e[i]<1||e[i]>5){
			i--;}}
	for(i=0;i<4;i++){
		if(i==0||e[i]>r){
			a=i;
			r=e[i];}
	cout << "it's " << filme[a];}
	return a;}
int main(){
	int actress, ator, pics, ost,pointypointpoints[4], besters,opyio;
	string bestyy;
	while(true){
	cout << "0: best actress\n1: best actor\n2: best visuals\n3: best ost\n4: best movie\n";
	cin >> opyio;
	if(opyio==0){
	actress=melhoratriz();}
	if(opyio==1){
	ator=melhorator();}
	if(opyio==2){
	pics=pintofgold();}
	if(opyio==3){
	ost=melhorost();}
	if(opyio==4){
	for(int i=0;i<4;i++){
		if(actress==i){
			pointypointpoints[i]++;}
		if(ator==i){
			pointypointpoints[i]++;}
		if(pics==i){
			pointypointpoints[i]++;}
		if(ost==i){
			pointypointpoints[i]++;}}
	for(int i=0;i<4;i++){
		if(i==0||pointypointpoints[i]>besters){
			besters=pointypointpoints[i];
			bestyy=filme[i];}}
	cout << "it's " << bestyy;}}}