#include <iostream>
using namespace std;
int main()
{
    char v;
    cout << "enter the character:";
    cin >> v;
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
        cout << "vowel";
    else
        cout << "consonant";
    return 0;
}