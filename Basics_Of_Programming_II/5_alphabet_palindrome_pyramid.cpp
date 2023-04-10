/*
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lastNumber;
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            lastNumber = col + 1;
            cout << char(64 + lastNumber);
        }
        for (int col = lastNumber - 1; col > 0; col--)
        {
            cout << char(64 + col);
        }

        cout << endl;
    }
}