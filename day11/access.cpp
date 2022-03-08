#include<iostream>
using namespace std;

class base{
	int i, j;
public:

	void set (int a, int b){
		i=a;
		j=b;
	}

	void show(){
		cout<<i << " " <<j<<endl;
	}

};

class derived: public base{
	int k;
public:

	derived(int x){
		k=x;
	}

	void showk(){
		cout<<k;
	}
};

int main(){
	derived ob(3);
	ob.set(1,2);
	ob.show();
	return 0;
}
