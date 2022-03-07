#include<iostream>
#include<string>
using namespace std;

class student{
public:
	int rolNo;
	string name;

	student(){

	}

	void stuinfo(){
		cout<<"roll no. is:"<<rolNo<<"\t"<<"name is:"<<name<<endl;
	}
};

class test{
public:
	int marks[5];

	test(){

	}
	
	void displaymarks(){
		cout<<"marks are: ";
		for(int i=0;i<5;i++){
			cout<<marks[i]<<"\t";
		}
		cout<<endl;
	}
};

class result : public test,public student{
public:
	result(){}
	int total=0;
	int percent;

	void sum(){
		for(int i=0;i<5;i++){
			total=marks[i]+total;
		}
		cout<<"total is:"<<total<<endl;
	}

	void per(){
		percent=(total*100)/500;
		cout<<"percentage is:"<<percent<<endl;
	}
};

int main(){
	student s1;
	test t1;
	result r1;
	int arr[5];
	cout<<"Enter yourroll number:";
	cin>>r1.rolNo;
	cout<<"Enter your name :";
	cin>>r1.name;
	cout<<"Enter 5 numbers:";
	for (int j=0;j<5;j++){
		cin>>arr[j];
	}
	for (int j=0;j<5;j++){
		r1.marks[j]=arr[j];
	}
	r1.stuinfo();
	r1.displaymarks();
	r1.sum();
	r1.per();
	return 0;
}