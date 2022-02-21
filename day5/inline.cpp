#include <iostream>

using namespace std;

inline int cube(int a){
	return a*a*a;
}

int main(){
int x;
	cout<<"enter number: ";
	cin>>x;
	cout<<"Cube is: "<<cube(x)<<endl;
	/*this function will not make a call, it will take whole function here.
	something like that: 
	cout << "cube is: " << x*x*x << endl;
	can not be used as recuresive function.
	*/
	return 0;
}