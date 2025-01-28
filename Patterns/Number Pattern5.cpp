#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int i = 1;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << i << " ";
            i++;
        }
        cout << endl;
    }
}