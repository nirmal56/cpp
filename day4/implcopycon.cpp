//copy constructors called by compiler
#include <iostream>

using namespace std;

class ABC {

private:
	int i=10;
public:

	ABC(){
		cout<<"default called"<<endl;
	}

	ABC(ABC &obj){
		cout<<"copy called"<<endl;
	}

	void add(ABC ob){
		cout<<"inside add function"<<endl;
	}

	ABC add(){
		ABC temp;
		cout<<"inside add fun which returns"<<endl;
		return temp;
	}
	
	ABC addret(){
		ABC temp;
		cout<<"inside add fun which returns diff"<<endl;
		return temp;
	}

};
int main(){
	ABC obj1;
	ABC obj2;
	//ABC obj2=obj1;//copy called
	//obj1.add(obj1);
	//everytime while passing argument or returning object copy will be called
	//if 2 argument 2 copy called
	obj2=obj1.add();
	//obj2=obj1.addret();
	return 0;
}