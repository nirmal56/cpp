#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1;
    try{
        if(n1==1)
            throw n1;
        if(n1==2)
            throw 'a';
        if(n1==3)
            throw 1.05;
    }
    catch(int x){
        cout<<"int"<<endl;
    }
    catch(double x){
        cout<<"float"<<endl;
    }
    catch(char x){
        cout<<"char"<<endl;
    }
}