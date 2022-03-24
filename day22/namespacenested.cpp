#include<iostream>
using namespace std;

namespace NS1{
    int i;
    namespace NS2{
        int j;
    }
}

int main(){
    NS1::i=10;
    NS1::NS2::j=20;
    cout<<NS1::i<<endl<<NS1::NS2::j<<endl;
    using namespace NS1;
    cout<<i*NS2::j<<endl;
    using namespace NS2;
    cout<<i*j<<endl;
}