#include <iostream>
using namespace std;
int main()
{
    int row, col;
    char a = 'a';
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
}