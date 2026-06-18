#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    if (n >= 100 && n <= 999)
    {
        cout << "three digit number";
    }
    else
    {
        cout << "not a three digit number";
    }
}