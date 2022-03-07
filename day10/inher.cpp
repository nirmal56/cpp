#include<iostream>
using namespace std;

//also example of single inheritance

class person{
public:
	int w,h;
private:
	int pri;
	void dispri(){
		cout<<"---------inside private---------";
	}
protected:
	int prot;
	void dispro(){
		cout<<"---------inside protected---------";
	}
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

/*
	you can not access private and protected of parent class anyhow.

	parent		child		access
	public		public		yes
	public		private		no
	public		protected	no
	all other no
*/

class doctor : public person{ 
	int ag;
public:
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

	d.w=20;
	d.h=30;
	d.display();
	// d.dispri();
	// d.dispro();

	return 0;
}