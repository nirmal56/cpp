#include<iostream>
using namespace std;

class base{
public:
    int b;

	base(){
	}

    virtual void show(){
        cout<<"\nb="<<b<<endl;
    }

	~base(){
	}
};

class derived : public base{
	int y;
public:
    int d;  

	derived(){
	}

	derived(int y){
	}

    void show(){
        cout<<"\nb="<<b<<"\nd="<<d<<endl;
    }

	~derived(){
	}
};

int main(){
	base b;
	derived d1;
    base *ptr;
    ptr = &b;
    cout<<"base";
    ptr->b=100;
    ptr->show();
    cout<<"derived";

    derived *dptr;
    dptr= &d1;

    dptr->b=200;
    dptr= &d1;
    dptr->d=300;
    dptr->show();
}