#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Year : ";
    cin >> n;
    if (n % 400 == 0 || (n % 100 == 0 && n % 2 != 0))
        cout << "Leap" << endl;
    else
        cout << "Not Leap" << endl;
}