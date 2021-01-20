#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1;
    int b = 1;
    while(a<=20)
    {
        b=2*a;
        a+=1;
        cout << "\n" << b;
    }
    cout << "\nSequence is displayed in steps of 2, even numbers up to 20" << endl;
}