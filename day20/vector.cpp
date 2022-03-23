#include<iostream>
#include<vector>

using namespace std;

int  main(){

    vector <char> v(10);
    int i;
    cout<<"size="<<v.size()<<endl;
    for(int i=0;i<10;i++){
        v[i] = i+ 'a';
    }

    cout<<"current contents:"<<endl;
    for(int i=0;i<10;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;

    cout<<"Expanding the vector"<<endl;

    for (int i=0;i<10;i++){
        v.push_back(i+10+'a');
    }

    cout<<"size now is:"<<v.size()<<endl;

    cout<<"current contents:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        v[i]=toupper(v[i]);
    }

      cout<<"modified contents:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;

    cout<<"adding insertion:"<<endl;
    v.insert(v.begin()+3,3,'z');
     cout<<"modified contents:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;

}