#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 2 number" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)

            throw "Divide by zero Error";
        c = a / b;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    cout << "REsult=" << c;
    return 0;
}