#include <iostream>

using namespace std;

int cubeVol(int l=5,int b=3,int h=4){
	return l*b*h;
}

int main(){

	cout<<cubeVol()<<endl;
	cout<<cubeVol(1)<<endl;
	cout<<cubeVol(1,2)<<endl;
	cout<<cubeVol(1,2,3)<<endl;
}