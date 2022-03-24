
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> v(10);                    // create a vector of length 10
    int i;                                 // display original size of vector
    cout << "Size = " << v.size() << endl; // assign the elements of the vector some values
    for (int i = 0; i < 10; i++)
    {
        v[i] = i + 'a';
    } // siplay contents of vector
    cout << "Current Contents:\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << "Expanding vector" << endl; // put more values onto the end of the vector, it will grow as needed
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i + 10 + 'a');
    } // display current size of v
    cout << "Size now is: " << v.size() << endl;
    cout << "current contents" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    } // change the contents of the vector
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = toupper(v[i]);
    }
    cout << "\ncurrent contents" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
// all the methods for VECTOR
