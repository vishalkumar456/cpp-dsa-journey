#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "enter the cost price:";
    cin >> cp;
    int sp;
    cout << "enter the sell price:";
    cin >> sp;
    int profit = sp - cp;
    int loss = cp - sp;
    if (sp > cp)
    {
        cout << "profit\n"
             << "loss is ="
             << profit;
    }
    else if (sp < cp)
    {
        cout << "loss\n"
             << "loss is ="
             << loss;
    }
    else
    {
        cout << "cost price";
    }
}