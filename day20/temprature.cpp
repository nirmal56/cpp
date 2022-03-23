#include<iostream>
#include<vector>

using namespace std;

class temp{
    int t;
    public:
    temp(){
        t=0;
    }
    temp(int t){
        this->t=t;
    }
    temp &operator=(int t){
        this->t=t;
        return *this;
    }
    double get_temp(){
        return t;
    }
};
bool operator<(temp a,temp b){
    return a.get_temp()<b.get_temp();
}
bool operator==(temp a,temp b){
    return a.get_temp()==b.get_temp();
}

int main(){
    vector <temp> v;
    int i;
    for(i=0;i<7;i++){
        v.push_back(temp(60+rand()%30));
    }
    cout<<"farenhite temprature\n";
    for(i=0;i<v.size();i++){
        cout<<v[i].get_temp()<<" ";
    }
    cout<<endl;

    for(i=0;i<v.size();i++){
        v[i]=(v[i].get_temp()-32)*5/9;
    }

    cout<<"centegrade temp:\n";
    for(i=0;i<v.size();i++){
        cout<<v[i].get_temp()<<" ";
    }
    cout<<endl;
    

}