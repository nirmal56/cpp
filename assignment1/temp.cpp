#include <iostream>
#include <fstream>

using namespace std;

int main()
{
again:
    string ID;
    string student_name;
    string branch;
    string location;
    string temp;
    string return_result;

    fstream file;

    file.open("database.txt", ios::app | ios::in);

    cout << "enter 1 to add a new student" << endl
         << "enter 2 to find a student with ID" << endl
         << "enter the input: ";
    int option;
    cin >> option;
    try
    {
        if (option == 1)
        {
            cout << endl
                 << "enter the ID: ";
            cin >> ID;

            cout << endl
                 << "enter the student name: ";
            cin >> student_name;

            cout << endl
                 << "enter the branch: ";
            cin >> branch;

            cout << endl
                 << "enter the location: ";
            cin >> location;

            string whole_line = ID + " " + student_name + " " + branch + " " + location;
            cout << "data added: " << whole_line << endl;

            file << ID + " " + student_name + " " + branch + " " + location << endl;
        }
        else if (option == 2)
        {
            int flag = 0;
            cout << "enter the ID: ";
            cin >> ID;
            try
            {
                while (!file.eof())
                {
                    file >> temp;
                    if (temp == ID)
                    {
                        flag = 1;
                        getline(file, return_result);
                    }
                }
                if (flag == 1)
                {
                    cout << "\nresult: " << return_result << endl;
                }
                else
                {
                    throw ID;
                }
            }
            catch (string a)
            {
                cout << "no user found of this id: " << a << endl;
            }
        }
        else
        {
            throw option;
        }
    }
    catch (int z)
    {
        cout << z << " "
             << "this is invalid entry"
             << "\t\n"
             << endl;
        goto again;
    }

    return 0;
}