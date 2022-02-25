#include<iostream>
using namespace std;

class location{
	int lon,lat;

public:

	location(){
		lon = 0;
		lat = 0;
		cout<<"--------def-------"<<endl;
	}

	location(int a, int b){
		lon = a;
		lat = b;
		cout<<"--------para-------"<<endl;
	}

	void display(){
		cout<<"====>longitude:"<<lon<<"   latitude:"<<lat<<endl;
	}

	void * operator new(size_t byte){
		void *ptr;
		cout<<"--------inside overloaded new--------"<<endl;
		ptr= malloc (byte);						//mo need to type cast as malloc returns always coid
		if(ptr == NULL){
			cout<<"could not allocate memory"<<endl;
			// exit();
		}
		return ptr;
	}

	void  operator delete(void *ptr){
		cout<<"--------inside overloaded delete--------"<<endl;
		free(ptr);
	}
};

int main(){
	location l1,l2(10,5);
	l1.display();
	l2.display();

	location *loc = new location(2,2);
	loc->display();

	int *pt = new int;   			//normal new will be called
	delete(loc);
	return 0;

}