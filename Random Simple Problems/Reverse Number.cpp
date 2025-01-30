#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n, ans=0,r;
    cout << "Number : ";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
        return 0;
        ans = ans * 10 + r;
    }
    cout << ans << endl;
}