// Nirmal Patel
// queue operation done
#include <deque>
#include <iostream>

using namespace std;

void display(deque<int> g)
{
    deque<int>::iterator p;
    for (p = g.begin(); p != g.end(); p++)
        cout << *p << "\t";
    cout << '\n';
}

int main()
{
    deque<int> q;
    int N, S;
    cout << "enter size of queue:";
    cin >> N;
    cout << "Enter size of subset:";
    cin >> S;
    for (int i = 1; i <= N; i++)
    {
        cin >> i;
        q.push_back(i);
    }
    display(q);

    int k = 0;
    int arr[S][N / S];
    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < N / S; j++)
        {
            int temp = q.front();
            arr[i][j] = temp;
            q.pop_front();
        }
    }

    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < N / S; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}