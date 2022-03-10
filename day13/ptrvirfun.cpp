#include<iostream>
using namespace std;

class base{
public:
    int b;

	base(){
	}

    virtual void show(){
        cout<<"Base"<<endl;
    }

	~base(){
	}
};

class derived1 : public base{
	int y;
public:
    int d;  

	derived1(){
	}

	derived1(int y){
	}

    void show(){
        cout<<"derived1"<<endl;
    }

	~derived1(){
	}
};
class derived2 : public base{
	int y;
public:
    int d;  

	derived2(){
	}

	derived2(int y){
	}

    void show(){
        cout<<"derived2"<<endl;
    }

	~derived2(){
	}
};

int main(){
    derived1 d1;
    derived2 d2;
    base *ptr;

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

}