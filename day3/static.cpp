#include <iostream>  
using namespace std;  
class Member{  
  private:  
	static int A;  				//static member variable
	static int B;  
	static int C;  
  
public:  
	static void disp(){  			//static member function
		A+=5;
		B+=10;
		C+=15;
		cout << " The value of the A is: " << A << endl;  
		cout << " The value of the B is: " << B << endl;  
		cout << " The value of the C is: " << C << endl;  
	}  
};   
int Member :: A;  
int Member :: B;  
int Member :: C;  
  
int main(){  
	cout << " Print the static member through the class name: " << endl; 
	Member::disp();  
	cout << " Print the static member through the class name: " << endl; 
	Member::disp(); 
	 
	return 0;  
}  
