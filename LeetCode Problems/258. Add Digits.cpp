#include <iostream>
using namespace std;
int main()
{
    int ans = 0;
    int n, r;
    cout << "Enter a number : ";
    cin >> n;
    while (n > 9)
    {
        ans = 0;
        while (n != 0)
        {
            r = n % 10;
            n /= 10;
            ans += r;
        }
        n=ans;
    }
    cout << ans << endl;
}