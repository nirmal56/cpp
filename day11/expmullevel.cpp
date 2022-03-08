#include<iostream>
using namespace std;

//example of multilevel inheritance

class person{
public:
	int w,h;
public:
	person(){

	}

	person(int a,int b){
		w=a;
		h=b;
	}

	void weight(int w=0){
		this->w=w;
	}

	void height(int h=0){
		this->h=h;
	}

	void display(){
		cout<<"----------------base class-----------------"<<endl;
		cout<<"weight:"<<w<<"\t"<<"height:"<<h<<endl;
	}
};

class doctor : public person{ 
public:
	int ag;
	doctor(){

	}

	doctor(int a){
		ag=a;
	}

	void age(int ag=0){
		this->ag=ag;
	}

	void display(){
		cout<<"---------------derived class---------------"<<endl;
		cout<<"weight:"<<w<<"\t"<<"height:"<<h<<"\t"<<"age:"<<ag<<endl;
	}
};

class jundoc : public doctor{ 
	int sal;
public:
	jundoc(){

	}

	jundoc(int a){
		sal=a;
	}

	void salary(int ag=0){
		sal=ag;
	}

	void display(){
		cout<<"---------------derived class 2---------------"<<endl;
		cout<<"weight:"<<w<<"\t"<<"height:"<<h<<"\t"<<"age:"<<ag<<"\t"<<"sal:"<<sal<<endl;
	}
};

int main(){
	person p;
	p.weight(50);
	p.height(10);
	p.display();

	doctor d;
	d.age(30);
	d.weight(30);
	d.height(20);
	d.display();

	jundoc d2;
	d2.age(40);
	d2.weight(35);
	d2.height(45);
	d2.salary(50000);
	d2.display();

	return 0;
}


/*
	you can not access private and protected of parent class anyhow.

	parent		child		access
	public		public		yes
	public		private		no
	public		protected	no
	all other no
*/