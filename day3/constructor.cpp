#include <iostream>
using namespace std;
//--------------this is contructor overloading-------------//
class Dist{
	private:
	int feet,inch;
	public:
	Dist(){
		cout<<"constructor called default"<<endl;
	}  //empty cons
	
	Dist(int f,int i){  //parametrized cons
		feet=f;
		inch=i;
	cout<<feet<<" "<<inch<<endl;
	}
	
	Dist(Dist &x){ //copy cons
		feet=x.feet;
		inch=x.inch;
	cout<<feet<<" "<<inch<<endl;
	}
	
	
};
int main(){
	Dist d2;
	Dist d(2,3);
	Dist d1(d);
}
