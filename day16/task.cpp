#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    char ch;
    int ws_count;
    file.open("abc.txt");
    if (!file)
    {
        cout << "cannot open the file" << endl;
    }
    else
    {
        while (!file.eof())
        {
            file.get(ch);
            if (ch == ' ')
            {
                ws_count++;
            }
        }
    }
    cout << "number of while spaces: " << ws_count << endl;
    return 0;
}
