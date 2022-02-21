#include <iostream>
#include <string>

using namespace std;
//int arg , int return
int sum(int a){
	return a;
}
//char arg , int return
int sum(int a,int b){
	return a+b;
}
/*
int sum(char a,char b){
	return a;
}
*/
//char arg , int return
char sum(char a,char b){
	return a;
}
//=====================1 char arg 1 int arg =====================//
int sum(int a,char b){
	return a;
}
char sum(char a,int b){
	return a;
}
//=========================================//
//string arg , string return
string sum(string a,string b,string c){
	return a+b+c;
}
//float arg , float return
float sum(float a,float b,float c,float d){
	return a+b+c+d;
}

int main(){
	cout<<sum(1)<<endl;								//int
	cout<<sum(1,2)<<endl;						//int
	cout<<sum('a','b')<<endl;						//int
	cout<<sum('a',2)<<endl;				
	cout<<sum(1,'a')<<endl;				
	cout<<sum("fname ","lname ","sname")<<endl;		//string
	cout<<sum(1.012,2.012,3.012,4.012)<<endl;		//float
	return 0;
}