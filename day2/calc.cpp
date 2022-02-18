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
	int sub(calc,calc);
	int div(calc,calc);
	calc mul(calc);
	calc avg(calc);
	int fact(){
		int fact=1;
		for(int i=1;i<=in1;i++){
			fact=fact*i;
		}
		return fact;
	}
	

};
int calc ::  add(calc c,calc c1){				//returning sum of object
		return c.in1+c1.in1;
	}
int calc ::  sub(calc c,calc c1){				//returning sub of object
		return c.in1-c1.in1;
	}
int calc ::  div(calc c,calc c1){				//returning div of object
		return c.in1/c1.in1;
	}
calc calc :: mul(calc c){
		calc temp;
		temp.in1 = c.in1 * c.in2;			//mul
		return (temp);
	}
calc calc :: avg(calc c){
		calc temp;
		temp.in1 = (c.in1 + c.in2)/2;			//avg
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
	 	out= obj1.sub(obj1,obj2);
	 	break;
 	case '*':
	 	temp= obj1.mul(obj1);
	 	break;
 	case '/':
	 	out= obj1.div(obj1,obj2);
	 	break;
 	case 'a':
	 	temp= obj1.avg(obj1);
	 	break;
 	case 'f':
	 	out= obj1.fact();
	 	break;
 	
 	
	}
	
	if(choice == '+' || choice == '/' || choice == '-' || choice == 'f')
	cout << "ans is:" << out << endl;
	if(choice == 'a' || choice == '*')
	cout << "ans is:" << temp.in1 << endl;
	return 0;
}
