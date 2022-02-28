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
	friend space operator -(space &);
	friend space operator --(space &);
	friend space operator ++(space &);
	friend space operator ++(space &,int);
	friend space operator --(space &,int);

};

 space operator -(space & temp){
	space t;
	cout<<"\nnegate";
	t.x=-temp.x;
	t.y=-temp.y;
	t.z=-temp.z;
	return t;
}
 space operator --(space & temp){	
	space t;
	cout<<"\npre decre";
	t.x=--temp.x;
	t.y=--temp.y;
	t.z=--temp.z;
	return t;
}
 space operator ++(space & temp){
	space t;
	cout<<"\npre incre";
	t.x=++temp.x;
	t.y=++temp.y;
	t.z=++temp.z;
	return t;
}
 space operator --(space & temp,int){
	space t;
	cout<<"\npost decre";
	t.x=temp.x--;
	t.y=temp.y--;
	t.z=temp.z--;
	return t;
}
 space operator ++(space & temp, int){
	space t;
	cout<<"\npost incre";
	t.x=temp.x++;
	t.y=temp.y++;
	t.z=temp.z++;
	return t;
}

int main(){
	space s1(5,4,3),d;

	s1.display();

	d=-s1;
	d.display();

	d=--d;
	d.display();

	d=++d;
	d.display();


	d= d++;
	d.display();

	d=d--;
	d.display();

	d= -s1;
	d.display();
	return 0;
}