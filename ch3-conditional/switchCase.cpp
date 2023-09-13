#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "please enter two number" << endl;
    cin >> n1 >> n2;

    char op;
    cout << "input a operator: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        break;
    }

    return 0;
}