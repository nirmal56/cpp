#include<iostream>
using namespace std;

class demo{
    int i;
public:

    demo(int x){
        i=x;
    }
    int getdata(){
        return i;
    }
};

int main(){
    demo d[3]={55,66,77};
    demo *ptr=d;
    for(int i=0;i<3;i++){
        cout<<ptr->getdata()<<endl;
        ptr++;
    }
    return 0;
}