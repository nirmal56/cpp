#include<iostream>
using namespace std;

class measure{
public:
	int height, length, width;
	int setInput(int a,int b,int c){
			height = a;
			length = b;
			width = c;
	}
	int area(){
		return height*length;
	}
	int volume(){
		return height*length*width;
	}

};

int main(){
	int a,b,c;
	measure m1,m2;
	cout << "enter height width length:";
	cin >> a >> b >> c;
	m1.setInput(a,b,c);
	a=m1.area();
	b=m1.volume();
	cout<<"area is:" << a << " & volume is:"<< b << endl;


	cout << "enter height width length:";
	cin >> a >> b >> c;
	m2.setInput(a,b,c);
	a=m2.area();
	b=m2.volume();
	cout<<"area is:" << a << " & volume is:"<< b << endl;
}