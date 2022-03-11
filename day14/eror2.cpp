#include<iostream>

using namespace std;

int main(){
    int n1,n2,div;
    cin>>n1>>n2;
    try{
        if(n2!=n1){
            float div = (float)n1/n2;
            if (div<0){
                throw 'e';
            }
            cout<<"n1/n2="<<div<<endl;
        }
        else if(n1==1)
            throw 1.05;
        else{
            throw n2;
        }
    }
    catch(int x){
        cout<<"exception division zero"<<endl;
    }
    catch(char e){
        cout<<"Exception div les shtan zer0"<<endl;
    }
    catch(...){
        cout<<"unkmnow exception"<<endl;
    }
    return 0;
}