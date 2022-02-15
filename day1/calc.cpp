#include<iostream>
using namespace std;

class calc{
public:
	int in1,in2;

	void setInput(int a, int b){
		in1=a;
		in2=b;
	}

	int add(){
		return in1+in2;
	}
	int mul(){
		return in1*in2;
	}
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

int main(){
	int x,y;
	char choice;
	calc obj1;
	int out;
	
	cout << "Enter choice:";
	cin >> choice;
	cout << "Enter 2 number:";
	cin >> x >> y;
	
	obj1.setInput(x,y);
	
	switch (choice){
	 
	case '+':
	 	out= obj1.add();
	 	break;
 	case '-':
	 	out= obj1.sub();
	 	break;
 	case '*':
	 	out= obj1.mul();
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
	return 0;
}
