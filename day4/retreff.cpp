//programm that returns something by reffersnce

#include<iostream>
using namespace std;

int& max(int &x,int &y){
	if(x>y){
		return (x+1);
	}
	else{
		return (y+1);
	}
}

int main(){
	int a=5,b=6,ans;
	ans= max(a,b);
	cout<<"max:"<<ans<<endl;
	return 0;
}