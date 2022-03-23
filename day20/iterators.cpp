#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector <char> v(10);
    vector <char> :: iterator p;
    int i;

    p=v.begin();
    i=0;
    while(p++ != v.end()){
        *p = i + 'a';
        i++;
    }
    cout<<"original contents but backwards:"<<endl;
    while(p-- != v.begin()){
        cout<<*p<<"\t";
        i--;
    }
    cout<<endl;

    p=v.begin();
    while( p++ != v.end()){
        *p = toupper(*p);
    }

    cout<<"modified contents:"<<endl;
    p=v.begin();
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    cout<<endl;


    v.insert(v.begin()+3,3,'Z');
    cout<<"modified contents:After Insertion"<<endl;

    p=v.begin();
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    cout<<endl;

    v.erase(v.begin()+3,v.begin()+5); 

    p=v.begin();
    cout<<"modified contents:After erasing"<<endl;
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    cout<<endl;

    v.erase(v.begin()); 

    p=v.begin();
    cout<<"modified contents:After erasing"<<endl;
    while( p++ != v.end()){
        cout<<*p<<"\t";
    }
    cout<<endl;
}