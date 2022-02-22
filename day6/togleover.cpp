//demonstrating operatoor over loading//
#include<iostream>
#include<string>

using namespace std;

class A{
	int num1,num2,ans;
public:
	A(){					//default const
		num1=0;
		num2=0;
	}

	int sum(int a, int b){
		num1 = a;
		num2 = b;
		ans=num1+num2;
		return ans;
	}
	int sub(int a, int b){
		num1 = a;
		num2 = b;
		ans=num1-num2;
		return ans;
	}

	void display(){				//display
		cout<<"===> "<<num1<<" "<<num2<< " "<< ans <<endl;
	}
	
};
class B{
	float num1,num2,ans;
public:
	B(){					//default const
		num1=0;
		num2=0;
	}

	float sum(float a, float b){
		num1 = a;
		num2 = b;
		ans=num1+num2;
		return ans;
	}
	float sub(float a, float b){
		num1 = a;
		num2 = b;
		ans=num1-num2;
		return ans;
	}

	void display(){				//display
		cout<<"===> "<<num1<<" "<<num2<< " "<< ans <<endl;
	}
	
};

int main(){
	A a1;
	B b1;
	float a,b,ans;
	cout<<"enter 2 number:";
	cin>>a>>b;

	ans=a1.sum(a,b);
	a1.display();


	ans=a1.sub(a,b);
	a1.display();

	ans=b1.sum(a,b);
	b1.display();

	ans=b1.sub(a,b);
	b1.display();


	return 0;
}