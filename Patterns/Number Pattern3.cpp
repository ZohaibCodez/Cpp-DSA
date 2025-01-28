#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 5; row >= 1; row--)
    {
        for (col = 5; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}