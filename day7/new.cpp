#include<iostream>
//demonstrate new keyword and pointer .
using namespace std;

int main(){
	float *pt =new float;
	*pt=55;
	cout<<"value:"<<*pt<<endl;

	cout<<"add:"<<pt<<endl;

	cout<<"sizer of value:"<<sizeof(*pt)<<endl;

	cout<<"size of add:"<<sizeof(pt)<<endl;
}