/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)

    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)

    {
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << n - row;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}