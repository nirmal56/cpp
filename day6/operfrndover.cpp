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
 	friend complex operator + (complex ob1,complex ob2);
  	friend complex operator - (complex ob1,complex ob2);	
    friend complex operator * (complex ob1,complex ob2);
    friend complex operator / (complex ob1,complex ob2);
};

complex operator + (complex ob1,complex ob2){			
	complex ans;
	ans.real = ob1.real + ob2.real;
	ans.img = ob1.img + ob2.img;
	return ans;
}
complex operator - (complex ob1,complex ob2){			
	complex ans;
	ans.real = ob1.real - ob2.real;
	ans.img = ob1.img - ob2.img;
	return ans;
}
complex operator * (complex ob1,complex ob2){			
	complex ans;
	ans.real = ob1.real * ob2.real;
	ans.img = ob1.img * ob2.img;
	return ans;
}
complex operator / (complex ob1,complex ob2){			
	complex ans;
	ans.real = ob1.real / ob2.real;
	ans.img = ob1.img / ob2.img;
	return ans;
}


int main(){
	complex c1(2,2),c2(1,2);
	complex c3;
	c1.display();
	c2.display();
	c3.display();

	cout<< "ADDITION:";
	c3 =c1 +c2;
	c3.display();
	cout<< "SUBTRACTION:";
	c3 =c1 -c2;
	c3.display();
	cout<< "MULTIPLICATION:";
	c3 =c1 *c2;
	c3.display();
	cout<< "DIVISION";
	c3 =c1 /c2;
	c3.display();
	return 0;
}