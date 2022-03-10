#include<iostream>

using namespace std;

class base

{

public:

virtual void function(){

cout<<"base virtual";

}

};

class derived1:public base{

public:

void function(){

cout<<"derived 1 virtual";

}

};

class derived2:public base{

public:

void display(){

cout<<"derived 2 virtual";

}

};

int main(){

derived1 d1;

derived2 d2;



d1.function();

d2.function();

d2.display();

}