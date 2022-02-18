//practice friend function.
#include <iostream>

using namespace std;

class Dist {
private:
    int meter;
    
	friend int add(Dist);    		// friend function

    public:
        Dist()  {
        	meter=0;
        }
};

int add(Dist d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Dist D;
    cout << "Distance: " << add(D)<<endl;
    return 0;
}
