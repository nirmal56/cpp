//demonstrating operatoor over loading//
#include<iostream>
#include<string>

using namespace std;

class complex{
	int real,img;
public:
	complex(){					//default const
		real=0;
		img=0;
	}

	complex(int x,int y){		//para const
		real = x;
		img = y;
	}

	void display(){				//display
		cout<<"===> "<<real<<"+i"<<img<<endl;
	}
//only one parameter that is to be after the operatior in functionality.
//first is before operator , seconde is after operator.
	complex operator + (complex obj){			
		complex ans;
		ans.real = real + obj.real;
		ans.img = img + obj.img;
		return ans;
	}

	complex operator - (complex obj){			
		complex ans;
		ans.real = real - obj.real;
		ans.img = img - obj.img;
		return ans;
	}
	complex operator * (complex obj){			
		complex ans;
		ans.real = real * obj.real;
		ans.img = img * obj.img;
		return ans;
	}
	complex operator / (complex obj){			
		complex ans;
		ans.real = real / obj.real;
		ans.img = img / obj.img;
		return ans;
	}
	bool operator < (complex obj){	
		if(real < obj.real){
			return true;
		}
		else {
			return false;
		}
	}
	
	bool operator > (complex obj){	
		if(real > obj.real){
			return true;
		}
		else {
			return false;
		}
	}

	bool operator == (complex obj){	
		if(real == obj.real){
			return true;
		}
		else {
			return false;
		}
	}
	bool operator >= (complex obj){	
		if(real >= obj.real){
			return true;
		}
		else {
			return false;
		}
	}
	bool operator <= (complex obj){	
		if(real <= obj.real){
			return true;
		}
		else {
			return false;
		}
	}
};

int main(){
	complex c1(0,2),c2(1,2);
	complex c3;
	bool t;
	c1.display();
	c2.display();
	c3.display();

	cout<< "ADDITION:";
	//below both are working to overload operator.
	//c3=c1+c2;
	c3 =c1.operator +(c2);
	c3.display();
	cout<< "SUBTRACTION:";
	c3 =c1.operator -(c2);
	c3.display();
	cout<< "MULTIPLICATION:";
	c3 =c1.operator *(c2);
	c3.display();
	cout<< "DIVISION";
	c3 =c1.operator /(c2);
	c3.display();

	t=c1<c2;
	cout<<"less than ====>"<<t<<endl;

	t=c1<=c2;
	cout<<"less than || equal ====>"<<t<<endl;

	t=c1>c2;
	cout<<"greater than ====>"<<t<<endl;

	t=c1>=c2;
	cout<<"greater than || equal ====>"<<t<<endl;

	t=c1==c2;
	cout<<"euqal====>"<<t<<endl;
	return 0;
}