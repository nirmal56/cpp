#include<iostream>

using namespace std;

class space{
int x,y,z;
public:
	space(){
		x=y=z=0;
	}
	space(int a,int b,int c){
		x=a;
		y=b;
		z=c;
	}

	void display(){
		cout<<"====>x="<<x<<",y="<<y<<",z="<<z<<endl;
	}
	space operator -();
	space operator --();
	space operator ++();
	space operator ++(int);
	space operator --(int);

};

space space::operator -(){
	space temp;
	cout<<"\nnegate"<<endl;
	temp.x=-x;
	temp.y=-y;
	temp.z=-z;
}
space space::operator --(){
	space temp;
	cout<<"\npre decre";
	temp.x=--x;
	temp.y=--y;
	temp.z=--z;
	return temp;
}
space space::operator ++(){
	space temp;
	cout<<"\npre incre";
	temp.x=++x;
	temp.y=++y;
	temp.z=++z;
	return temp;
}
space space::operator --(int){
	space temp;
	cout<<"\npost decre";
	temp.x=x--;
	temp.y=y--;
	temp.z=z--;
	return temp;
}
space space::operator ++(int){
	space temp;
	cout<<"\npost incre";
	temp.x=x++;
	temp.y=y++;
	temp.z=z++;
	return temp;
}

int main(){
	space s1(5,4,3),d;

	s1.display();

	d=-s1;
	s1.display();

	d=--s1;
	s1.display();

	d=++s1;
	s1.display();

	d = s1++;
	s1.display();

	d=s1++;
	s1.display();

	d= -s1;
	s1.display();
	return 0;
}