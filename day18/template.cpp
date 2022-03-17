
#include <iostream>
using namespace std;

template <typename T>
T sum(T n1, T n2)
{
    T ans = n1 + n2;
    return ans;
}

int main()
{
    float ans = sum(10.0, 25.5);
    cout << "answer is: " << ans << endl;

    return 0;
}