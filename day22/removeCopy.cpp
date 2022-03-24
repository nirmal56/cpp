#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    char str[]="i do c ++ programming";
    vector<char> v,v1(30);
    int i;
    for(i=0;i<str[i];i++){
        v.push_back(str[i]);
    }

    cout<<"input sequence:"<<endl;

    for(i=0;i<str[i];i++){
        cout<<v[i];
    }
    cout<<endl;

    remove_copy(v.begin(),v.end(),v1.begin(),' ');
    cout<<"Result after removing copy:"<<endl;

    for(i=0;i<str[i];i++){
        cout<<v1[i];
    }
    cout<<endl;
    return 0;
}