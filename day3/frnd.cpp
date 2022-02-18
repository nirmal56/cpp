//practice friend function.
#include <iostream>

using namespace std;

class Dist {

    public:
    
    int meter;
    
        Dist()  {
            meter=0;
        }
    friend int add(Dist);           // friend function
       
};

class Dist2 {

    public:
    int m;
        Dist2()  {
            m=0;
        }
    friend int add(Dist2);           // friend function
     
};

int add(Dist d,Dist2 d2) {
    d.meter += 10;
    d2.m += 20;
    return d.meter+d2.m;
}

int main() {
    Dist D;
    Dist2 D1;
    cout << "Distance: " << add(D,D1)<<endl;
    return 0;
}
