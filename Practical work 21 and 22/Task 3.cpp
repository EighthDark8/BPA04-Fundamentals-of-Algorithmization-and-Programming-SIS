#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    while(a<=55)
    {
        b=2*a+1;
        a+=1;
        cout << "\n" << b;
    }
    cout << "\nDisplayed a sequence with a step of 2, odd numbers up to 55" << endl;
}