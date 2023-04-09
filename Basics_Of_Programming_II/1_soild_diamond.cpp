
/*
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int spcaes = 0; spcaes < n - row - 1; spcaes++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < row - 1 + 1; spaces++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
