/*

* * * * *
*       *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int rowCount, colCount;
    cout << "Rows" << endl;
    cin >> rowCount;
    cout << "Cols" << endl;
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int spaces = 0; spaces < colCount - 2; spaces++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
