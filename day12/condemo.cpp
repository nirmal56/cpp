#include<iostream>
using namespace std;

class base1{
    protected:
	int x;
public:
	base1(int x){
        this->x = x;
		cout<<"base1 class"<< " " << x <<endl;
	}
	~base1(){
		cout<<"base1 destructer"<<endl;
	}
};
class base2{
    protected:
	int y;
public:
	base2(int y){
        this->y = y;
		cout<<"base2 class"<< " " << y <<endl;
	}
	~base2(){
		cout<<"base2 destructer"<<endl;
	}
};

class derived: public base1,public base2{
	int y,x,z;
public:
	derived(int x, int y, int z):base1(x),base2(y){
        this->y = y;
        this->x = x;
        this->z = z;
		cout<<"base2 class"<< " " << x <<" " << y<<" " << z<<endl;
	}
	~derived(){
		cout<<"derived des"<<endl;
	}
};

int main(){
	derived d1(10,20,30);
}