#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Number : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Not Palindrome" << endl;
        return 0;
    }
    int num = n, r, ans = 0;
    while (num)
    {
        r = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            cout << "Overflowed" << endl;
            return 0;
        }
        ans = (ans * 10) + r;
    }
    if (ans == n)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}