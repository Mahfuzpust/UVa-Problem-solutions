#include <iostream>
using namespace std;

int main()
{
    int e;
    while (cin >> e, e)
    {
        int count = 0;
        int f = 0;

        while ((f = e / 3) != 0)
        {
            e = (e % 3) + f;
            count =count+ f;
        }

        if (e % 3 == 2)
            ++count;

        cout << count << '\n';
    }
}
