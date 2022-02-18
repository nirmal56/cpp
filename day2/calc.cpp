#include<iostream>
using namespace std;

class calc{
public:
	int in1,in2;

	void setInput(int a, int b){
		in1=a;
		in2=b;
	}

	int add(calc,calc);
	calc mul(calc);
	int sub(){
		return in1-in2;
	}
	int div(){
		return in1/in2;
	}
	int fact(){
		int fact=1;
		for(int i=1;i<=in1;i++){
			fact=fact*i;
		}
		return fact;
	}
	int avg(){
		return (in1+in2)/2;
	}
	

};
int calc ::  add(calc c,calc c1){				//returning sum of object
		return c.in1+c1.in1;
	}
calc calc :: mul(calc c){
		calc temp;
		temp.in1 = c.in1 * c.in2;			//
		return (temp);
	}
int main(){
	int x,y;
	char choice;
	calc obj1,obj2,temp;
	int out;
	
	cout << "Enter choice:";
	cin >> choice;
	cout << "Enter 2 number:";
	cin >> x >> y;
	
	obj1.setInput(x,y);
	obj2.setInput(y,x);
	
	switch (choice){
	 
	case '+':
	 	out= obj1.add(obj1,obj2);
	 	break;
 	case '-':
	 	out= obj1.sub();
	 	break;
 	case '*':
	 	temp= obj1.mul(obj1);
	 	break;
 	case '/':
	 	out= obj1.div();
	 	break;
 	case 'a':
	 	out= obj1.avg();
	 	break;
 	case 'f':
	 	out= obj1.fact();
	 	break;
 	
 	
	}
	
	
	cout << "ans is:" << out << endl;
	cout << "ans is:" << temp.in1 << endl;
	return 0;
}
