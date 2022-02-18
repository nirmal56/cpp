#include<iostream>
using namespace std;

//  swap by refference
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

//  swap by pointer
void swapp(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    cout << "\nAfter swapping by pointer" << endl;
    cout << "a = " << *n1 << endl;
    cout << "b = " << *n2 << endl;
}

int main()
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

//  swap by refference
    swap(a, b);

    cout << "\nAfter swapping by ref" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

//  swap by pointer
    swapp(&a, &b);

    return 0;
}