#include<iostream>
using namespace std;

class temp{
public:
	int anspub;
private:
	int anspri;
protected:
	int anspro;
public:
	int sum(int d1,int d2){
	temp t;
		anspub=d1+d2;
		cout<<"accessing private function:"<<t.fun1(2,3)<<endl;							//accessing private function and public variable within class
		cout<<"accessing protected function:"<<t.fun4(2,3)<<endl;							//accessing protected function and public variable within class
		return anspub;
	}
	int sub(int d1,int d2){
	temp t;
		anspri=d1-d2;
		cout<<"accessing private function:"<<t.fun2(2,3)<<endl;							//accessing private function and private variable within class
		cout<<"accessing protected function:"<<t.fun5(2,3)<<endl;							//accessing protected function and public variable within class
		return anspri;
	}
	int mul(int d1,int d2){
	temp t;
		anspro=d1*d2;
		cout<<"accessing private function:"<<t.fun3(2,3)<<endl;							//accessing private function and protected variable within class
		cout<<"accessing protected function:"<<t.fun6(2,3)<<endl;							//accessing protected function and public variable within class
		return anspro;
	}

private:
	int fun1(int d1,int d2){				
		anspub=d1+d2;
		return anspub;
	}
	int fun2(int d1,int d2){
		anspri=d1-d2;
		return anspri;
	}
	int fun3(int d1,int d2){
		anspro=d1*d2;
		return anspro;
	}	

protected:
	int fun4(int d1,int d2){
		anspub=d1+d2;
		return anspub;
	}
	int fun5(int d1,int d2){
		anspri=d1-d2;
		return anspri;
	}
	int fun6(int d1,int d2){
		anspro=d1*d2;
		return anspro;
	}
};

int main(){
	temp ob;
	//this answer of public will be displayed last in commandline becausse others are called before it is returned.
	cout<<"public var public fun:"<<ob.sum(1,2)<<endl;							//accessible both
	cout<<"private var public fun:"<<ob.sub(1,2)<<endl;							//accessible both
	cout<<"protected var public fun:"<<ob.mul(1,2)<<endl;						//accessible both
	

	// cout<<"public var private fun:"<<ob.fun1(1,2)<<endl;						// not accessible
	// cout<<"private var private fun:"<<ob.fun2(1,2)<<endl;					// not accessible
	// cout<<"protected var private fun:"<<ob.fun3(1,2)<<endl;					// not accessible

	// cout<<"public var protected fun:"<<ob.fun4(1,2)<<endl;					// not accessible
	// cout<<"private var protected fun:"<<ob.fun5(1,2)<<endl;					// not accessible
	// cout<<"protected var protected fun:"<<ob.fun6(1,2)<<endl;				// not accessible



	return 0;
}