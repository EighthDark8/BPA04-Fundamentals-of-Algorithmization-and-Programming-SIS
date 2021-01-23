/*Задание 2*/
/*Создайте программу, выводящую на экран все четырёхзначные числа последовательности 1000 1003 1006 1009 1012 1015.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1000;
    int b = 3;
    while((int)(log10(a) + 1) == 4)
    {
        cout << "\n" << a;
        a += b;
    }
    cout << "\nAll even four-digit numbers are displayed" << endl;
}