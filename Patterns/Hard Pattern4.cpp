#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    for (int i = 1; i <= n; i++)
    {
        char k = 'A';
        for (int j = 1; j <= n - i; j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}