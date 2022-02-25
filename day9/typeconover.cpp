//basic to class type conversion using overloading
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

	void operator = (int x){

		cout<<"inside time overloaded\n";
		hour = x / 60;
		min = x % 60;
	}
};

int main(){
	int x=130;

	Time T1;
	T1 = x ;
	T1.display();
	return 0;
}