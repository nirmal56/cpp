#include <iostream>
using namespace std;
template <class T1>
int sum(T1 b, T1 c){
    static int a = 10;
    ++a;
    cout << "sum: with static " << a + b + c << endl;
};
template <class T1, class T2>
int sum(T2 a, T2 b, T1 c){
    cout << "sum: " << a + b + c << endl;
};

int sum(int a, int b){
    cout << "sum: " << a + b << endl;
};
int main(){
    int a, b;
    float x, y, z;
    cout << "enter 2 int numbers" << endl;
    cin >> a >> b;
    cout << "enter 3 double numbers" << endl;
    cin >> x >> y >> z;
    sum(y, z);
    sum(y, z);
    sum(y, z);
    sum(a, b);
    sum(x, b);

    return 0;
}