
#include <iostream>
using namespace std;

template <typename T,class U>
void multiply(T num1, U num2){
    cout<<"result:"<<num1*num2<<endl;
}

int main()
{
   double a=10.1,b=10.2;
    multiply(a,b);
    return 0;
}