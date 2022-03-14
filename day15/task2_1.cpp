#include <iostream>

using namespace std;

class Base{};

class Derived : public Base{};

int main(){
    try{
        throw Derived();
    }

    catch (Derived d){
        cout << "enxeption handled using Derived class" << endl;
    }
    
    catch (Base b){
        cout << "enxeption handled using Base class" << endl;
    }

    return 0;
}