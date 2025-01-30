#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Number : ";
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = 0, m = 1, r;
    while (n)
    {
        r = n % 2;
        r = !r;
        ans = ans + r * m;
        m *= 2;
        n /= 2;
    }
    cout << ans << endl;
}