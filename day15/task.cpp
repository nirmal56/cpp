#include<iostream>
using namespace std;

class task{
    int a=1,b=1;
    public:
    task(){

    }
    task(int a){
        this->a=a;
    }
    task(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    }

    class subtask{
        int x=1,y=2;
        public:
        void displays(){
            cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
        }
    };
};

class derived : public task{

};

int main(){
    // task t2(2,3);

    // task *t;
    // t=&t2;

    task :: subtask st;

    // derived d2;

    // t->display();
    st.displays();

    // d2.st.displays();

}