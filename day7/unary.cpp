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
		cout<<"\n====>x="<<x<<",y="<<y<<",z="<<z<<endl;
	}
	void operator -();
	void operator --();
	void operator ++();
	space operator ++(int);
	void operator --(int);

};

void space::operator -(){
	x=-x;
	y=-y;
	z=-z;
}
void space::operator --(){
	cout<<"\npre decre";
	--x;
	--y;
	--z;
}
void space::operator ++(){
	cout<<"\npre incre";
	++x;
	++y;
	++z;
}
void space::operator --(int){
	cout<<"\npost decre";
	x--;
	y--;
	z--;
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

	-s1;
	s1.display();

	--s1;
	s1.display();

	//++s1;
	s1.display();

	d = s1++;
	cout<<"------------------------------";
	cout<<"\nd";
	d.display();

	cout<<"s1";
	s1.display();

	s1++;
	s1.display();

	-s1;
	s1.display();
	return 0;
}