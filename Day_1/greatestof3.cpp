#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " the largest";
    }
    if (b > a && b > c)
    {
        cout << b << " the largest";
    }
    if (c > a && c > b)
    {
        cout << c << "the largest";
    }
}