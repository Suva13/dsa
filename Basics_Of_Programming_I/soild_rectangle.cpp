/*

* * * * *
* * * * *
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
        for (int col = 0; col < colCount; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
