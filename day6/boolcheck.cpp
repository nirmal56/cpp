
//this programme is just ot check the bool in cpp as was not working in c without library named std bool//

#include<iostream>
#include<string>

using namespace std;

class complex{
public:
	bool temp(){
		return true;
	}

};

int main(){
	complex c1;

	cout<<c1.temp();
}