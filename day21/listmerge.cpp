#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lst; // create an empty list
    list<int> lst2;
    list<int> lst3;
    for (int i = 0; i < 3; i++)
    {
        lst.push_back(i+10); // adds elements from end of the list
    }
     for (int i = 3; i < 6; i++)
    {
        lst2.push_back(i+10); // adds elements from end of the list
    }

    cout << "contents of the list1";

    list<int>::iterator p = lst.begin(); // p will contains the address of the first element in the list

    cout<<endl;
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl << endl;


    cout << "contents of the list2";

    list<int>::iterator q = lst2.begin(); // q will contains the address of the first element in the list

    cout<<endl;
    while (q != lst2.end())
    {
        cout << *q << " ";
        q++;
    }
    cout << endl << endl;

    lst2.merge(lst);
    cout<<"merged"<<endl;
    q= lst2.begin();
    while (q != lst2.end())
    {
        cout << *q << " ";
        q++;
    }   

    cout << endl << endl;

    return 0;
}