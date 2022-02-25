//basic to class type conversion using constructor
#include<iostream>
using namespace std;

class Time{
	int hour,min;
public:
	Time(){
		cout<<"def"<<endl;
	}
	Time(int x){
		cout<<"inside time para\n";
		hour = x / 60;
		min = x % 60;
	}
	void display(){
		cout<<"---->hour:"<<hour<<"\n----> min:"<<min<<endl;
	}
};

int main(){
	int x=130;
//Time T1(130) will also work
	Time T1;
	T1 = x ;
	T1.display();
	return 0;
}