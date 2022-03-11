#include<iostream>

using namespace std;

int main(){
    int n1,n2,ans;
    cin>>n1>>n2;
    try{
        if(n2==0)
            throw(n2);
        else{
            ans=n1/n2;
            cout<<ans<<endl;
        }
    }
    catch(int x){
        cout<<"kal aana,cant devide by "<<x<<endl;
    }
    cout<<"kya dekh re ho,khatam program"<<endl;
}