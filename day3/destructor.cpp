#include <iostream>
using namespace std;
//--------------this is distructor-------------//
class Dist{
	private:
	int feet,inch;
	public:
	Dist(){//empty cons
	
		cout<<"constructor called default"<<endl;
	}  
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
	
	~Dist(){
		cout<<"destrcutor called"<<endl;
	}
};
int main(){
	Dist d2;
	Dist d(2,3);
	Dist d1(d);
}
