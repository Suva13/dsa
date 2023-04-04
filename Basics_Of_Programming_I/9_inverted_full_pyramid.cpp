/*

* * * * * *
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
        for (int spaces = 0; spaces < row; spaces++)
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
