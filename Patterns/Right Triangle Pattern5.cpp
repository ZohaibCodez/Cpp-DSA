#include <iostream>
using namespace std;
int main()
{
    char a = 'a';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
}