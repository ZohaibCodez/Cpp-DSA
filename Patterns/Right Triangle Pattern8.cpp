#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k = 5;
        for (int j = i; j >= 1; j--)
        {
            cout << k << " ";
            k --;
        }
        cout << endl;
    }
}