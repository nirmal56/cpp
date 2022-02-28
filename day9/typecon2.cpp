/*
input =1.27
op=t.hour =1,t.min=27

*/
#include<iostream>
using namespace std;

class Time{
	int hour,min;
public:

	Time(){
		cout<<"def"<<endl;
	}

	void display(){
		cout<<"---->hour:"<<hour<<"\n----> min:"<<min<<endl;
	}

	void operator = (float x){
		float temp;
		temp=x;
		cout<<"inside time overloaded\n";
		hour = int(x);
		min = ((temp-hour)*100);
	}
};

int main(){
	float x=1.39;
	cout<<"enter num:";
	cin>>x;
	Time T1;
	T1 = x ;
	T1.display();
	return 0;
}