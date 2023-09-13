#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 12;

    cout << "size of int " << sizeof(a);

    float b;
    cout << "\nsize of float " << sizeof(b);

    char c;
    cout << "\nsize of char " << sizeof(c);

    double d;
    cout << "\nsize of double " << sizeof(d);

    bool e;
    cout << "\nsize of bool " << sizeof(e);

    short int si;
    long int li;

    cout << "\nsize of short int " << sizeof(si);
    cout << "\nsize of long int " << sizeof(li);

    return 0;
}
