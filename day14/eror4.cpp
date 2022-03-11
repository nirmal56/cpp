#include <iostream>

using namespace std;

int main()
{
    int n1;
    cout << "enter the number 1: ";
    cin >> n1;

    try
    {
        try
        {
            if (n1 == 1)
            {
                throw n1;
            }
            else if (n1 == 2)
            {
                throw 'a';
            }
            else if (n1 == 3)
            {
                throw 4.5;
            }
        }
        catch (int x)
        {
            cout << "throwing integer exception" << endl;
        }

        catch (char k)
        {
            cout << "throwing character exception" << endl;
        }

        catch (double l)
        {
            cout << "throwing double exception" << endl;
        }

        catch (...)
        {
            cout << "unknown exception" << endl;
        }
        // throw 0;
    }
    catch (int a)
    {
        cout << "outer nested" << endl;
    }

    return 0;
}