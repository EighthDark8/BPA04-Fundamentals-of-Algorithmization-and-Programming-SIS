#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a;
    int sum=0;
    cout << "enter the number: ";
    cin >> a;
    while (a!=0)
    {
        sum += a % 10;
        a /= 10;
    }
    cout << "sum = " << sum << endl;
    return 0;
}